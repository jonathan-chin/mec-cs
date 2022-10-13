---
theme: default
class: invert
paginate: true
---

# 09 - Reduce, Midterm, and Review
2022-10-12

---

# House Keeping

- Well commented code is an invaluable habit to pick up
  - long projects
  - engineering teams
- Midterm
  - week long coding project given next week
  - will require all skills and knowledge to date
  - will not be based on D&D

---

# Anecdote and Extension

- I just ran into a JS object side effect issue in a 2+ year long project!
- Deep knowledge of the JS model is invaluable if you ever code:
  - React (frontend)
  - Node (backend)
  - Redux (frontend, heavy emphasis on FP)

---

# Reduce

- special case of map
- takes an array of variables and returns a single variable
- implements functions as first class variables and is side effect free

---

# Reduce Example

```
const grades = [92, 99, 86, 94, 65];
const reducer = (running_total, current_value) => {
	return running_total + current_value;
};
const total_grades = grades.reduce(
	reducer, // function to determine intermediate value
	0 // starting intermediate value
);
```

---

# Additional Parameters

- reduce function also provides additional arguments if you need them.
- function signature is `(previousValue, currentValue, currentIndex, array)`
- this is actually also true for `filter` and `map`

---

# Involved example



---

# Review of Functional Programming

- Side Effects
- Pure / Impure Functions
- First Class Functions
- Higher Order Functions
- Recursion
- map
- filter
- reduce

---

# Homework Lab
