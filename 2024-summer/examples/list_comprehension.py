# list comprehension is ... a shorter way to create a list
# ... making a list more understandable
# ... running a function through a list
# ... adding to a list by computation

snacks = ["Welch's", "Pringles Chips", "Doritos Chips", "Ritz", "Hal's Chips", "Fruit", "Fritos Chips", "Rice Krispies", "Popcorn"]

# only the chips with for loop
chips_for_loop = []
for snack in snacks:
    if "Chips" in snack:
        chips_for_loop.append(snack)

print(chips_for_loop)

chips_list_comprehension = [s for s in snacks if "Chips" in s]
print(chips_list_comprehension)
