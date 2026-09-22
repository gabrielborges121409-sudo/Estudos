username = input("Enter a username: ")

#caso username possua mais de 12 caracteres
if len(username) > 12:
    print("Your username can't be more than 12 characters.")   
#caso username possua espaços
elif not username.find(" "):
    print("Your username can't contain spaces")
else:
    print(f"Hello {username}!")
    