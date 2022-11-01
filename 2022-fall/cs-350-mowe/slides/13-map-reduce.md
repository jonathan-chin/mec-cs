---
theme: default
class: invert
paginate: true
---

# 13 - Map, Reduce, and Concatenation
2022-10-31

---

# Review of Midterm Part 2
## [github link](https://github.com/jonathan-chin/mec-cs/blob/main/2022-fall/cs-350-mowe/assignments/05-midterm-review.js)

---

# Core Concepts

- lots of small functions
- compose or chain them to accomplish 

---

# map in Python

- just like `filter`, Python has a top level function called `map`
- operates just like `map` in JS except can operate across multiple iterables
- `REMEMBER`: returns an `iterable` instead of `list` or `tuple`
- syntax:
```
map(function, iterable_1, ... iterable_n)
```

---

# map examples

```
populations = (3400, 8500, 7100, 290)
def get_projected_population(pop):
    return pop**2
projected_populations = map(get_projected_population, populations)

# or

projected_populations = map(lambda pop: pop ** 2, populations)
print(tuple(projected_populations)) # converts iterable back to tuple
```

---

# reduce in Python

- similar output to `reduce` in JS
- `not` a core function, must import from functools
- does `not` take an initial value
  - instead, the `lambda` function takes 2 arguments: iterable, lambda
  - on first run through, will take first 2 items in iterable
  - on subsequent runs, will take the result and next item in line

---

# reduce example

```
from functools import reduce

numbers = (5, 2, 7, 9, 3)
total = reduce(lambda a, b: a + b, numbers)
print(total)
```

---

# Coding Lab

Create the following pure functions:
- Generate a list of playing cards representing a standard deck (Ace through King, Clubs through Spades, no jokers)
- Select a card at random and return both that card + the smaller deck
