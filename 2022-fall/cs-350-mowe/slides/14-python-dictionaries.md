---
theme: default
class: invert
paginate: true
---

# 14 - Python Dictionaries
2022-11-07

---

# Review

## Functional Programming is a separate `paradigm` from Object Oriented and and Imperative Programming

---

# FP Non Compliant Features

If your code uses any of the following, it is not compliant with the core principles of Functional Programming:

- `class` keyword. organizing data in classes relies on side effects
- `for` and `while` loops. these are used in imperative programming.
- `append`, `extend`, and similar functions. these relie on side effects to work.
- the only function that doesn't return a value AND have its value used should be a display / print function
- note about directions from `Look Away` assignment

---

# Rule of Thumb

While the following code may *work* (as in run and produce the final result), it is only working because of side effects.

```
value = 10

def increment():
	value++
	# does not return a value
	
increment() # does not 
```

---

# Functional Programming in the Wild

Since FP is centered around immutability, it is ideal to use in multi threaded environments, where race conditions might be present.

- React and redux use it to provide a single source of truth
- Firebase and other database cluster platforms use FP principles to prevent race conditions

---

# Python Dictionaries 1/2

- analogous to JS objects
- like JS, dictionaries are called by reference by default

```
store = {
	'alligators': 10,
	'bobcat': 5,
	'carp': 7
}
zoo = store
zoo['carp'] = 0

# what is store?
```

---

# Python Dictionaries 2/2

Dictionaries need the same strategies as JS objects

```
store = {'alligators': 10,'bobcat': 5,'carp': 7}
zoo = {**store} # spread operator

# or

z00 = {
	**store,
	'alligators': 50 # will overwrite previous items
}

# or

import copy # imports should be defined at top
zoo2 = copy.deepcopy(store) # to be safe, use deepcopy always
```
