import math
# a função "round()" faz o arredondamento para números inteiros

radius = float(input("Enter the radius of a circle: "))

circumference = 2 * math.pi * radius

print(f"The circumference is: {round(circumference)}")