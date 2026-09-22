agenda = {}
contatos_salvos = 0
contatos_removidos = 0

while True:
    print("[1] Adicionar um novo contato.\n"
          "[2] Pesquisar um contato.\n"
          "[3] Remover um contato.\n"
          "[4] Sair do programa.")
    escolha = int(input("R: "))

    match escolha:
        case 1:
            nome = input("Digite o nome do contato: ")
            telefone = input("Digite o numero: ")
            agenda[nome] = telefone
            contatos_salvos += 1
        case 2:
            procurar_nome = input("Digite o nome do contato que queira buscar: ")

            if procurar_nome in agenda:
                print(f"Numero:{agenda[procurar_nome]}")
            else:
                print("Contato não encontrado.")
        case 3:
            remover_contato = input("Digite o nome do contato que queira remover: ")
            del agenda[remover_contato]
            contatos_removidos += 1
        case 4:
            print("Encerrando...")
            print(f"Contatos salvos: {contatos_salvos}")
            print(f"Contatos removidos : {contatos_removidos}")
            break
