---
theme: default
paginate: true
---

# 08 - While Loops
2024-03-13

---

# Review
## What is 1 thing you remember about last class?

- boolean operators - take boolean expressions and transforms them
- `&&` takes 2 boolean expressions and evaluates to true only if both are true
- `||` takes 2 boolean expressions and evaluates to true if at least one of them is true
- `nesting` one thing inside another thing
  - used `nested if statements` in color mixer
- unique to C++ is the `else if` keyword
  - allows us to chain if statements
- `switch` - mimics a series of `==` checks with if statements
  - `pros` - faster to write; also allows for more complex logic
  - `cons` - in C++, can only use switch with `ints` and `chars`
- `break` - exits out of the current `code block`
- `return` - exits out of the entire function, possibly also giving a value
  - eg: `return 0;`, `return;`

---

# Control Flow - Loops

- `if/else` lets us skip **forward** in code
- `functions` let us pause and run a different piece function / program
- `loops` let us rewind **backward** in code

---

# While Loop

- `while` keyword has two components: the `condition` and `code block`
- so long as the `condition` evaluates to `true`, the `code block` will run

---

# While Loop Syntax

```
while(some_boolean_expression){
	// do something repeatedly here
}

// note: the following syntax is also correct but NOT recommended
while(some_boolean_expression)
	// one statement to execute repeatedly
```

---

# Infinite Loop

- **remember**: the computer is only as smart as you tell it to
- if the `condition` is always true, the same `code block` will keep running
- will likely eat up your ram, making your computer sluggish or even crash
- this is another example of a `logic error` or `runtime error`

---

# Code Along

---

# Lab

---

# For Next Week

- Read 5.1 - 5.11 on Looping
