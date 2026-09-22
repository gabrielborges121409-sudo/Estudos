def validar_senha(senha):
    if len(senha) < 8:
        return False  

    tem_maiuscula = False
    tem_minuscula = False
    tem_numero = False
    tem_especial = False

    for char in senha:
        if char.isupper():
            tem_maiuscula = True
        elif char.islower():
            tem_minuscula = True
        elif char.isdigit():
            tem_numero = True
        else:
            tem_especial = True  
           
    return tem_maiuscula and tem_minuscula and tem_numero and tem_especial

print(
    """
--- REGRAS PARA CRIAR UMA SENHA VÁLIDA ---
1. Mínimo de 8 caracteres
2. Pelo menos 1 letra maiúscula (A-Z)
3. Pelo menos 1 letra minúscula (a-z)
4. Pelo menos 1 número (0-9)
5. Pelo menos 1 caractere especial (!, @, #, $, %, etc.)
------------------------------------------
"""
)
   
while True:

    minha_senha = input("Digite uma senha: ")
    resultado = validar_senha(minha_senha)


    if resultado:
        print("Senha válida!")
        break
    else:
        print("Senha inválida! Verifique as regras.")