---
theme: default
class: invert
paginate: true
---

# 11 - Review, Python Intro, and Midterm
2022-10-19

---

# Review

Key concepts:

- Side Effects
- Pure / Impure Functions
- First Class Functions
- Higher Order Functions
- Recursion
- map
- filter
- reduce

---

# Review Exercise

- We'll break into small groups and create a **Google Slides** document that explains each of these concepts.
- Create at least 1 slide per concept
- Try to answer the following questions:
    - **What** is this?
	- **Why** is it important?
	- **How** can we implement it? This might be a code sample
- `Be Creative!` Use different forms of media: text, diagrams, images, gifs, movies, etc.

---

# Python Intro

- We'll be continuing the rest of the semester in **Python 3.10**
- For the basics of syntax, you can review [W3 Schools](https://www.w3schools.com/python/)
- Same concepts, different implementations

---

# Key differences

- Python doesn't have constants. By convention, instead, constant variables are name with `all caps`
- others? we'll see!

---

# Tuples and Lists

- Python's direct analogy of JS's array is the `list`
- Syntax is very familiar:
```
drinks = ['juice', 'water', 'milk']
print(drinks[0])
```
- `Lists` are mutable, just like arrays. As an alternative, Python has `Tuples`.

---

# Tuples

- `Tuples` are ordered and immutable
- Since they are inherently immutable, they are preferred in functional programming!
- The create syntax is slightly different but otherwise uses syntax similar to `lists` and JS `arrays`
```
drinks = ['juice', 'water', 'milk'] # list
appetizers = ('chips', 'mozzarella sticks', 'peanuts') # tuple
print(drinks[0])
print(appetizers[0])
```

---

# Tuple Concatenation

- Python overloads the `+` operator with `tuples` to act as concatenation `side effect free`
- so adding `tuples` together will generate a `new` `tuple` with the values combined
- `note`: the syntax for a single element `tuple` is a little weird

```
planets = ('Mercury', 'Mars', 'Earth')
new_planets = planets + ('Venus', ) # need trailing comma for single tuple
```

---

# Python Indexing

- When indexing into a `list` or `tuple`, you have several different options:

```
appetizers = ('chips', 'mozzarella sticks', 'peanuts') # tuple
appetizers[3] # get item at position 3
appetizers[-3] # get item 3 spots from end
appetizers[:3] # get all items from start to, but not including, 3rd item
appetizers[:-3] # get all items from start to, but not including, item 3 spots from end
appetizers[3:] # get all items from 3rd spot to end
appetizers[-3:] # get all items starting from 3rd spot from end to end
# etc
```

---

# Destructuring

- Python also has the concept of `destructuring` with `tuples`
- called `packing` and has similar syntax to what we've seen in javascript
- there's an additional wildcard option to grab any remaining items in a tuple

```
countries = ('Angola', 'Bhutan', 'Canada', 'Denmark', 'England')
(a, b, c, d, e) = countries
# a -> 'Angola', etc
(a, *others) = countries
# others -> ['Bhutan', 'Canada', 'Denmark', 'England']
(a, *others, e) = countries
# others -> ['Bhutan', 'Canada', 'Denmark']

```

---

# Coding Practice

- Given what you now about `tuples`, how would you code the `functional programming` implementation of pop()?
- Hint: review how we did it in javascript!
