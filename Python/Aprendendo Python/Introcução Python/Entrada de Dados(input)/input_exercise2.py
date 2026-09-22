item = input("What item woud you like to buy?: ")
price = float(input("What is the price?: " ))
quantity = int(input("How many would you like?: "))
total = price * quantity

print(f"You have bought {quantity} X {item}/s")
print(f"Your total is: ${total}")
