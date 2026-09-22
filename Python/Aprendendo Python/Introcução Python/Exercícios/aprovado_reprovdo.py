#Escreva um programa que:

#Tenha uma lista fixa de notas, por exemplo notas = [7.5, 4.0, 8.0, 3.5, 6.0, 9.5, 5.0]
#Percorra a lista com for
#Para cada nota, verifique se é aprovado (nota >= 6.0) ou reprovado (nota < 6.0)
#Ao final, mostre quantos foram aprovados e quantos foram reprovados

notas = [7.5 , 6.0 , 5.0 , 9.0]
aprovados = 0
reprovados = 0

for nota in notas:
    if nota >= 6:
        print("Aprovado")
        aprovados += 1
    else:
        print("Reprovado")
        reprovados  += reprovados + 1

print(f"Aprovados: {aprovados}")
print(f"Reprovados: {reprovados}")