---
theme: default
paginate: true
---

# 10 - Loops
2023-11-11

---

# Review
## What is 1 thing you remember from our last class?

---

# Control Flow - Loops

- `if/else` lets us skip **forward** in code
- `loops` let us rewind **backward** in code
  - depending on the condition, a `loop` can actually be skipped altogether and not run

---

# while Loop

- `while` keyword has two components: the `condition` and `code block`
- so long as the `condition` evaluates to `true`, the `code block` will run
- think of it as an `if` statement that repeats if `true`

---

# while Loop Syntax

```
while(some_boolean_expression){
	// do something repeatedly here
}

// note: the following syntax is also correct but NOT recommended
while(some_boolean_expression)
	// one statement to execute repeatedly
```

---

# while Loop Example

```
int hoursAsleep = 0;
while(hoursAsleep <= 8){
	hoursAsleep += 1;
	// can also do hoursAsleep++;
	// or hoursAsleep = hoursAsleep + 1;
}
std::cout << "Wake up!";
```

---

# Infinite Loop

- **remember**: the computer is only as smart as you tell it to
- if the `condition` is always true, the same `code block` will keep running
- will likely eat up your ram, making your computer sluggish or even crash
- this is another example of a `logic error` or `runtime error`

---

# Increment and Decrement Operators

- often when using loops, we want to check our `condition` against a counter variable

```
int counter = 0;

// all of these are the same thing
counter = counter + 1;
counter += 1;
counter++;

// all of these are the same thing
counter = counter - 1;
counter -= 1;
counter--;
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

# do-while Loop and Input Validation

- `input validation` is checking that user input is valid, ie free from error
- also called `error checking` or `sanitizing` or just plain `validation`
- `do-while` loop can repeatedly ask user for input until valid data is given

---

# Pause for Questions

---

# for Loops

- `for` loops are special kinds of `while` loops
- still repeats a block of code
- composed of 4 parts:
  - initialization: sets up any necessary variables
  - condition: is checked before each loop
  - update: runs at the `end` of each loop
  - code block: code to be run
- can still technically cause an infinite loop
  - template makes that unlikely

---

# for Loop Example

```
for(int days_left = 10; days_left > 0; days_left--){
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

# The "Standard" for Loop

- if you want to run exactly 32 times
```
for(int index = 0; index < 32; index++){
  // do stuff
}
```
- swap 32 for the appropriate number
- also plays well with `arrays`

---

# Summary

- loops let you rewind back to a previous part of the code
- `while` loops will run between 0 - infinite number of times
- `do-while` loops will run between 1 - infinite number of times
- `while` and `do-while` loops are good when you don't know how many times you need to run
- `for` loops will run a definite number of times

---

# Coding Lab

---


# For Next Week

- reread chapter 5
- quiz
- assignment (for real)
- revise midterm if you want to (due before Thanksgiving)
