---
theme: default
class: invert
paginate: true
---

# 12 - More Python
2022-10-24

---

# Review
## What is a tuple?

---

# Destructuring in Python

- Python also has the concept of `destructuring` with `tuples`
- called `packing` and has similar syntax to what we've seen in javascript
- there's an additional `expansion` or `splat` operator to grab any remaining items in a tuple

```
countries = ('Angola', 'Bhutan', 'Canada', 'Denmark', 'England')
(a, b, c, d, e) = countries
# a -> 'Angola', etc
(a, *others) = countries # uses * to splat the rest of items
# others -> ['Bhutan', 'Canada', 'Denmark', 'England']
(a, *others, e) = countries
# others -> ['Bhutan', 'Canada', 'Denmark']

```

---

# Coding Practice

- Given what you now about `tuples`, how would you code the `functional programming` implementation of pop()?
- Hint: review how we did it in javascript!

---

# Python Functions

- named functions use the `def` keyword and use indentation
```
def function_name(arguments):
	# code goes here
```
- Python has an equivalent to JS anonymous functions
- uses the `lambda` keyword, with slightly different syntax
- Python lambda functions can `ONLY` run `ONE` line
```
function_name = lambda arg_1, arg_2 : # code goes here
```

---

# filter

- Python has a built in `filter` function
- top level function, unlike in JS
- operates same way as in JS
- syntax is a little different
- returns an `iterator`

```
filtered_tuple = filter(filter_function, tuple)
```

---

# iterables and iterators

- `lists` and `tuples` contain an ordered collection of items
- often times, we want to process all the items one at a time
- by default, JS processes similar data types (arrays) by loading the entire thing in memory
- sometimes, this is inefficient or impossible
- instead, use `iterator` to load only one item at a time in memory
- both Python and JS use `iterators`

---

# iterables and iterators example

```
vegetables = ('asparagus', 'broccoli', 'cabbage') # declare tuple
veg_iterable = iter(vegetables) # convert tuple to iterable, initializes at start
veg_1 = next(veg_iterable) # get first item and move iterator to next
veg_2 = next(veg_iterable) # get next item
# etc
# will raise exception if no more items

# you can also use the for in syntax if you want everything
# reset iterable
veg_iterable = iter(vegetables)
for veg in veg_iterable:
	print(veg)
```

---

# iterators and functional programming
## something was wrong in the previous code sample

---

# putting it all together

```
grades = (2, 7, 9, 1, 4)
lower_than_3 = lambda x : x < 3
top_grades = filter(lower_than_3, grades)
for grade in top_grades:
	print(grade);

```
