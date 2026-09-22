def calcular_valor_compra(valor, cupom):
    if valor >= 200:
        valor = valor - 15
   
    if cupom == "DESCONTO10" or "desconto10":
        valor = valor * 0.90
    elif cupom == "DESCONTO20" or "desconto20":
        valor = valor * 0.80
    else:
        print("Nao existe esse cupom, sem desconto.")
       
    return valor
   
try:
    valor_compra = float(input("Digite o valor da compra: "))
except ValueError:
    print("Valor inváldo.")
cupom = input("Digite o cupom: ")

resultado_valor_final = calcular_valor_compra(valor_compra, cupom)
print(f"Valor final: {resultado_valor_final}")