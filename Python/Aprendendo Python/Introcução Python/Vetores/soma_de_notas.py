notas = [7.5, 8.0, 6.5, 9.0, 5.5]
soma = 0.0

for nota in notas:
    soma += nota

media = soma / len(notas)

print(f"Soma: {soma}")
print(f"Média: {media}")