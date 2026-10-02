import sqlite3
import time


class Biblioteca:
    def __init__(self, db_name="biblioteca.db"):
        self.conexao = sqlite3.connect(db_name)
        self.cursor = self.conexao.cursor()
        self._criar_tabela()

    def _criar_tabela(self):
        self.cursor.execute("""
        CREATE TABLE IF NOT EXISTS livros(
            id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
            titulo TEXT NOT NULL,
            autor TEXT,
            ano_publicado INT,
            status BOOLEAN DEFAULT 1
        );
        """)
        self.conexao.commit()

    def adicionar_livro(self, titulo, autor, ano):
        self.cursor.execute(
            "INSERT INTO livros (titulo, autor, ano_publicado) VALUES (?, ?, ?)",
            (titulo, autor, ano)
        )
        self.conexao.commit()

    def listar_livros_disponiveis(self):
        self.cursor.execute("SELECT titulo FROM livros WHERE status = 1")
        return self.cursor.fetchall()

    def pegar_livro(self, titulo):
        self.cursor.execute("SELECT * FROM livros WHERE titulo = ? AND status = 1", (titulo,))
        livro = self.cursor.fetchone()
        
        if livro:
            self.cursor.execute("UPDATE livros SET status = 0 WHERE id = ?", (livro[0],))
            self.conexao.commit()
            return True
        return False

    def devolver_livro(self, titulo):
        self.cursor.execute("SELECT * FROM livros WHERE titulo = ? AND status = 0", (titulo,))
        livro = self.cursor.fetchone()
        
        if livro:
            self.cursor.execute("UPDATE livros SET status = 1 WHERE id = ?", (livro[0],))
            self.conexao.commit()
            return True
        return False

    def deletar_livro(self, titulo):
        self.cursor.execute("SELECT * FROM livros WHERE titulo = ? AND status = 1", (titulo,))
        livro = self.cursor.fetchone()
        
        if livro:
            self.cursor.execute("DELETE FROM livros WHERE id = ?", (livro[0],))
            self.conexao.commit()
            return True
        return False

    def listar_tabelas(self):
        self.cursor.execute("SELECT name FROM sqlite_master WHERE type='table';")
        return self.cursor.fetchall()

    def fechar_conexao(self):
        self.conexao.close()


class SistemaBiblioteca:
    def __init__(self):
        self.biblioteca = Biblioteca()

    def executar(self):
        while True:
            print("\n=== BIBLIOTECA ===")
            print("""O que deseja fazer hoje:
[1] Adicionar um Livro
[2] Pegar um Livro
[3] Devolver Livro
[4] Deletar Livro
[5] Ver Tabelas
[6] Encerrar""")
            
            try:
                escolha = int(input("R: "))
            except ValueError:
                print("Entrada inválida! Digite apenas números.")
                continue

            match escolha:
                case 1:
                    self._menu_adicionar_livro()
                case 2:
                    self._menu_pegar_livro()
                case 3:
                    self._menu_devolver_livro()
                case 4:
                    self._menu_deletar_livro()
                case 5:
                    self._menu_listar_tabelas()
                case 6:
                    print("Encerrando o sistema...")
                    time.sleep(1)
                    self.biblioteca.fechar_conexao()
                    break
                case _:
                    print("Opção inválida! Escolha um número entre 1 e 6.")

    def _menu_adicionar_livro(self):
        titulo = input("Digite o título do livro ou > 0 < para voltar: ").strip()
        if titulo == "0" or not titulo:
            return

        autor = input("Digite o autor do livro: ").strip()
        if not autor:
            print("O autor não pode ficar em branco!")
            return

        try:
            ano = int(input("Digite o ano de publicação do livro: "))
        except ValueError:
            print("Ano inválido. Operação cancelada.")
            return

        self.biblioteca.adicionar_livro(titulo, autor, ano)
        print(f"Livro '{titulo}' adicionado com sucesso!")

    def _menu_pegar_livro(self):
        livros = self.biblioteca.listar_livros_disponiveis()
        if livros:
            print("\n=== LIVROS DISPONÍVEIS NO ACERVO ===")
            for livro in livros:
                print(f"- {livro[0]}")
        else:
            print("Nenhum livro disponível no momento.")
            return

        titulo = input("\nDigite o título desejado ou > 0 < para voltar: ").strip()
        if titulo == "0":
            return

        if self.biblioteca.pegar_livro(titulo):
            print("Você pegou o livro com sucesso!")
        else:
            print("Livro não encontrado ou indisponível.")

    def _menu_devolver_livro(self):
        titulo = input("Digite o título do livro que deseja devolver: ").strip()
        print("Devolvendo livro...")
        time.sleep(1)
        
        if self.biblioteca.devolver_livro(titulo):
            print(f"O livro '{titulo}' foi devolvido com sucesso!")
        else:
            print("Este livro não consta como emprestado ou não existe no acervo.")

    def _menu_deletar_livro(self):
        titulo = input("Digite o livro que deseja deletar: ").strip()
        if self.biblioteca.deletar_livro(titulo):
            print("Deletando livro...")
            time.sleep(1)
            print("Livro deletado com sucesso.")
        else:
            print("Livro não encontrado, emprestado ou não existe.")

    def _menu_listar_tabelas(self):
        tabelas = self.biblioteca.listar_tabelas()
        if tabelas:
            print("\n--- TABELAS ENCONTRADAS ---")
            for tabela in tabelas:
                print(f"- {tabela[0]}")
            print("---------------------------\n")
        else:
            print("Nenhuma tabela encontrada.")


if __name__ == "__main__":
    app = SistemaBiblioteca()
    app.executar()