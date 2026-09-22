tarefas = []

while True:
    print("[1] Adicionar uma nova tarefa\n[2] Ver as tarefas pendentes\n"
    "[3] Concluir (remover) uma tarefa\n[4] Sair do programa")

    escolha = int(input("R: "))

    match escolha:
        case 1:
            tarefa = input("Digite a tarefa: ")
            tarefas.append(tarefa)
        case 2:
            print(f"{tarefas}\n")
        case 3:
            print("Qual tarefa voce quer remover:\n")
            remover = input("Digite a tarefa que queira remover: ")
            tarefas.remove(remover)
        case 4:
            break
                 