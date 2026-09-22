class Livro:
    def __init__(self, titulo, autor):
        self.titulo = titulo
        self.autor = autor
        self.disponivel = True

    def exibir_info(self):
        status = "Disponível" if self.disponivel else "Emprestado"
        return f"Título: {self.titulo} | Autor: {self.autor} | Status: {status}"

class Biblioteca:
    def __init__(self, nome):
        self.nome = nome
        self.acervo = []

    def adicionar_livro(self, livro):
        self.acervo.append(livro)
        print(f"O livro '{livro.titulo}' foi adicionado à biblioteca {self.nome}.")

    def emprestar_livro(self, titulo):
        for livro in self.acervo:
            if livro.titulo == titulo:
                if livro.disponivel:
                    livro.disponivel = False
                    return f"Sucesso ao resgatar o livro '{titulo}'."
                else:
                    return f"O livro '{titulo}' já está emprestado."
        return f"O livro '{titulo}' não foi encontrado no acervo."

    def listar_livros(self):
        print(f"\n--- Lista de Livros ({self.nome}) ---")
        for cada_livro in self.acervo:
            print(cada_livro.exibir_info())

# Criando a biblioteca e livros
biblioteca = Biblioteca("Biblioteca Central")
livro1 = Livro("Minha Historia", "Gabriel Borges")
livro2 = Livro("Senhor dos Aneis", "Nerd Lucas Bauer")
livro3 = Livro("A NBA e do França", "Jogador Francisco")

biblioteca.adicionar_livro(livro1)
biblioteca.adicionar_livro(livro2)
biblioteca.adicionar_livro(livro3)

biblioteca.listar_livros()

# Empréstimos 
print(biblioteca.emprestar_livro("Minha Historia")) # Sucesso
print(biblioteca.emprestar_livro("Minha Historia")) # Já emprestado
print(biblioteca.emprestar_livro("Livro Inexistente")) # Não encontrado

# Listar novamente 
biblioteca.listar_livros()