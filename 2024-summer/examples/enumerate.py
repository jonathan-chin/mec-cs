snacks = ["Welch's", "Pringles", "Doritos"] # in ranked order

# with enumeration
for i, snack in enumerate(snacks, 1):
    print(i, snack)


print('---')
# with a standard for loop
count = 1
for i in snacks:
    print(count, i)
    count += 1

print('---')
# with range
for i in range(len(snacks)):
    print(i + 1, snacks[i])
