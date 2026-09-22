import random 
#Biblioteca para gerar um número aleatório

numero_secreto = random.randint(1, 100)
#Criamos uma variável para receber esse número aleatório

print("===JOGO DE ADIVINHAR NUMERO===")
contador_tentativas = 1
#o contador vai começar com 1 devido ao primeiro numero que vamos digitar, que não possui a 
# mesma linha que os ifs.

while True:
    tentativa = input("Digite um numero: ")

    #Esse bloco é para caso o usuário acabar digitando uma letra
    try:
        tentativa = int(tentativa)
    except ValueError:
        print("Por favor, digite apenas números inteiros!")
        continue

    if tentativa == numero_secreto:
        print("Párabens, você conseguiu!")
        print(f"Total de tentativas: {contador_tentativas}")
        break
    elif tentativa > numero_secreto:
        print("O numero é menor!")
        contador_tentativas = contador_tentativas + 1
    elif tentativa < numero_secreto:
        print("O numero é maior!")
        contador_tentativas = contador_tentativas + 1