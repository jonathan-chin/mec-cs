---

theme: default
paginate: true

---

# 13 - Midterm Review
2024-03-22

---

# Review

- `control flow` - the order in which code is executed
- `control structure` - keywords or coding patterns that allow you to change the control flow
  - eg: `if`, `if-else`, `else if`, `while`, `do-while`, `for`, `switch`

---

# While Loop

- evaluates if something if something is true or false
- if it is true, then executes the `code block`
- be careful of `infinite loops`
  - might slow down or crash your machine
  - could provide bad `UI/UX`
  - happens when the condition is never false
- checks the condition at the start of the loop

---

# While Loop Syntax

```
while(condition){
	// do stuff
}
```

---

# Do While Loop

- will always execute code block at least once
- checks the condition at the end of the loop
- otherwise, the same as a while loop
- used a lot in `input validation`
  - check whether the user has given correct input
  - eg: number is not negative, letter is a, b, c, or d.

---

# Do While Loop Syntax

```
do {
	// do stuff
} while(condition)
```

---

# For Loop

- special kind of while loop
- less likely to cause an infinite loop
- combines initialization, condition, and update in a single statement
  - provides extra security and protections against bugs
- usually used when you want to execute code an exact number of times

---

# For Loop Syntax

```
for(
	int x = 0; // initiliazation
	x < 100;   // condition
	x++        // update	
){
	// do stuff
}
```

---

# Summarizing All Loops

- `while` can run between 0-infinite times
- `do-while` can run between 1-infinite times
- `while` and `do-while` are used if you don't always know how many times you're going to execute code
- `for` is best when you know exactly how many times you're going to execute code
