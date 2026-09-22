#Typecasting basicamente é o processo de converter a variavel para: str() , int(), float(), bool()

name = "Gabriel Borges"
age = 16
gpa = 3.2
is_student = True

print(type(is_student))

#podemos converter uma variavel de um tipo "a" para do tipo "b", por exempllo:

age = float(age)
print(age)

name = bool(name)
print(name)
#caso name for " ", a saida será False