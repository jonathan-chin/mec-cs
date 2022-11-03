# splat exampleOA

countries = ('Angola', 'Bhutan', 'Canada', 'Denmark', 'England')
(*other_countries, e) = countries
#print(b)
#print(other_countries)


# example of functional programming

def functional_pop(tup):
    (*shortened_tup, last_element) = tup
    return(shortened_tup, last_element)

print(countries);
answer = functional_pop(countries)
print(answer)


# example of lambda

increase_by_1 = lambda x : x + 1
number = increase_by_1(10)
print(number)


# wrapping it all together:

grades = (2, 7, 9, 1, 4)
top_grades = filter(lambda x : x > 3, grades)
for grade in top_grades:
    print(grade);

# coding practice:
# take tuple of countries and return only those that start with a vowel


vowels = 'aeiouAEIOU'
countries_starting_with_vowels = filter(lambda x : x[0] in vowels, countries)
for country in countries_starting_with_vowels:
    print(country)
