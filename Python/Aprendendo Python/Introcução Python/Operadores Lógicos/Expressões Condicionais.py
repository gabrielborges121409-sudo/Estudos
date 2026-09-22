# conditional expression é uma pequena linha de "if" e "else" dentro de um print ou cálculo

num = 6

num = 5
a = 6
b = 7
age =13
temperature = 2
user_role = "admin"

#print("Positive" if num > 0 else "Negative")
#result = "EVEN" if num % 2 == 0 else "ODD"
#max_num = a if a > b else b
#min_num = a < b else b
#status = "Adult" if age >= 18 else "Child"
#weather = "hot" if temperature > 20 else "cold"
access_level = "Full Access" if user_role == "admin" else "Limited access"

print(access_level)