---
theme: default
class: invert
paginate: true
---

# 12 - More on Loops
2022-10-31

---

# Review

- what is the `while` loop?
- what is the `do-while` loop?

---

# Coding Lab

---

# For Loops

- `for` loops are special kinds of `while` loops
- still repeats a block of code
- composed of 4 parts:
    - initialization: sets up any necessary variables
	- condition: is checked before each loop
	- update: runs at the `end` of each loop
	- code block: code to be run

---

# For Loop Example

```
for(int days_left = 10; days_left > 0; days--){
	// do something
}

for(
	int days_left = 10; // initialization
	days_left > 0; // condition
	days_left-- // update
	){
	// do something	
}
```

---

# Exiting a loop

- `break` will exit out of a loop
  - useful if you hit some special case
- `continue` will skip rest of current iteration of loop
  - will go back to top of loop and stil check conditional

- our textbook recommends against using either keyword
  - in practice, I have seen them rarely used except in `switch` statements

---

# Loops Review

- `while` - execute code 0-infinite times, not sure when to stop
- `do-while` - execute code 1-infinite times, not sure when to stop
- `for` - execute code exactly n times

---

# Coding Lab
