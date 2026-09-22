import sqlite3

# 1. CRIANDO O BANCO DE DADOS NA MEMÓRIA RAM
# O ':memory:' cria um banco temporário que apaga quando o programa fecha (ótimo para testes)
conn = sqlite3.connect(':memory:')

# O 'cursor' é a ferramenta que envia os comandos SQL para dentro do banco de dados
cursor = conn.cursor()

# 2. PREPARANDO A TABELA E UM USUÁRIO DE TESTE
# Criamos a tabela 'users' com colunas para ID, nome de usuário e senha
cursor.execute('''
    CREATE TABLE users (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        username TEXT NOT NULL,
        password TEXT NOT NULL
    )
''')

# Inserimos um usuário legítimo para fazermos os testes de login
cursor.execute("INSERT INTO users (username, password) VALUES ('admin', 'senha123')")

# O 'commit' salva as alterações feitas no banco de dados
conn.commit()


# -------------------------------------------------------------------
# 3. EXEMPLO DE CÓDIGO VULNERÁVEL (INSEGURO)
# -------------------------------------------------------------------
def login_vulneravel(usuario_digitado, senha_digitada):
    # ATENÇÃO: Usar f-string junta o texto do usuário direto na instrução SQL.
    # Se o usuário digitar caracteres especiais do SQL (como '), o banco vai interpretar como COMANDO.
    query = f"SELECT * FROM users WHERE username = '{usuario_digitado}' AND password = '{senha_digitada}'"
    
    # O banco recebe o comando modificado pelo atacante e o executa
    cursor.execute(query)
    
    # 'fetchone()' tenta pegar o primeiro usuário encontrado que bateu com a busca
    user = cursor.fetchone()
    return user


# -------------------------------------------------------------------
# 4. EXEMPLO DE CÓDIGO SEGURO (CORRIGIDO)
# -------------------------------------------------------------------
def login_seguro(usuario_digitado, senha_digitada):
    # SOLUÇÃO: Usamos '?' como um marcador de posição (placeholder).
    # O '?' avisa ao banco: "Aguarde, aqui vai entrar um texto simples, não execute nada daqui!"
    query = "SELECT * FROM users WHERE username = ? AND password = ?"
    
    # Passamos as variáveis dentro de uma TUPLA (entre parênteses) no segundo parâmetro.
    # O próprio driver do banco trata todos os caracteres especiais com segurança.
    cursor.execute(query, (usuario_digitado, senha_digitada))
    
    user = cursor.fetchone()
    return user


# -------------------------------------------------------------------
# 5. SIMULANDO UM ATAQUE DE SQL INJECTION (SQLi)
# -------------------------------------------------------------------
# O atacante digita "admin' --" no campo de usuário.
# O simbolo ' fecha a aspa do texto e o -- diz ao SQL para ignorar (comentar) o resto do comando.
ataque_sqli = "admin' --"
senha_qualquer = "senha_errada"

print("--- TESTE 1: CÓDIGO VULNERÁVEL ---")
resultado_vulneravel = login_vulneravel(ataque_sqli, senha_qualquer)

# Se o banco retornar algum dado, significa que o ataque funcionou e o login foi burlado
if resultado_vulneravel:
    print(f"[VULNERÁVEL] Login aceito sem a senha correta! Usuário: {resultado_vulneravel[1]}")
else:
    print("Acesso negado.")


print("\n--- TESTE 2: CÓDIGO SEGURO ---")
resultado_seguro = login_seguro(ataque_sqli, senha_qualquer)

# No código seguro, o banco busca exatamente por alguém cujo nome seja "admin' --" e falha com segurança
if resultado_seguro:
    print(f"Login aceito! Usuário: {resultado_seguro[1]}")
else:
    print("[SEGURO] Acesso negado! O código tratou o ataque como apenas um texto comum.")

# Encerra a conexão com o banco de dados para liberar memória
conn.close()