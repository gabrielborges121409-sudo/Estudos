def Somar(a, b):
    return a + b

def Subtrair(a, b):
    return a - b

def Multiplicar(a, b):
    return a * b

def Dividir(a, b):
    # Apenas o divisor (b) não pode ser zero!
    if b == 0:
        return "Erro: Não é possível dividir por zero."
    return a / b

while True:
    print("\n--- CALCULADORA ---")
    print("[1] Somar\n[2] Subtrair\n[3] Multiplicar\n[4] Dividir\n[5] Sair")
    
    try:
        escolha = int(input("R: "))
    except ValueError:
        print("Digite apenas um número válido do menu.")
        continue  # Volta para o início do loop sem quebrar o programa

    if escolha == 5:
        print("Encerrando...")
        break

    if escolha in [1, 2, 3, 4]:
        try:
            num1 = float(input("Digite o primeiro número: "))
            num2 = float(input("Digite o segundo número: "))
        except ValueError:
            print("Erro: Digite apenas números para os cálculos.")
            continue

        # Executando a função com base na escolha
        match escolha:
            case 1:
                print(f"Resultado: {Somar(num1, num2)}")
            case 2:
                print(f"Resultado: {Subtrair(num1, num2)}")
            case 3:
                print(f"Resultado: {Multiplicar(num1, num2)}")
            case 4:
                print(f"Resultado: {Dividir(num1, num2)}")
    else:
        print("Opção inválida! Escolha um número de 1 a 5.")