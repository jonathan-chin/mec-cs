---
theme: default
paginate: true
---

# 11 - Looping
2022-10-22

---

# Control Flow - Looping

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
- this is another example of a `logic error`

---

# While Loop and Input Validation

- `input validation` is checking that user input is valid, ie free from error
- also called `error checking` and just plain `validation`
- `while` loop can repeatedly ask user for input until valid data is given
- another way to solve the pizza problem we had

---

# Increment and Decrement Operators

- often when using loops, we want to check our `condition` against a counter variable

```
int counter = 0;
counter = counter + 1; // valid way of increasing a variable or counting up
counter++; // shortcut to increment a variable

counter = counter - 1; // valid way of decreasing a variable or counting down
counter--; // shortcut to decrement a variable
```

---

# Evaluation

- `++` and `--` are a little more complicated than just increasing / decreasing
- these operators will also `evaluate` the variable
- this is pretty common `coding pattern`

```
int counter = 10;

if(counter++ == 10){
	// counter is evaluated first and THEN incremented
	cout << "This line will run";
}
```

---

# Prefix vs Postfix

- there are two ways to write increment and decrement

```
int counter = 10;

if(counter++ == 10){
	// increments AFTER evaluation
	cout << "this line will run";
}

counter = 10
if(++counter == 10){
	// increments BEFORE evaluation
	cout << "this line will never run";
}

```

---

# do-while Loop

- regular `while` loop will only execute the `code block` if the `condition` is true
- sometimes, you want to execute the `code block` `at least once`
- `do-while` will guarantee the `code block` runs `at least once`

```
do{
	// code goes here
}while(some_boolean_expression)

```


---

# Pause for Questions
## and code examples
