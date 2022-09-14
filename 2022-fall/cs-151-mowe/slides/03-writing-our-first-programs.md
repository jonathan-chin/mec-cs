---
theme: default
class: invert
paginate: true
---

# 03 - Writing Our First Programs
2022-09-14

---

# First!

Let's review `Lines and Statements` and `Variables` from `Class 02`

---

# The Structure of a C++ Program

- At the simplest level, a computer processes code in a linear fashion: from top to bottom, first line to last line
- There are certain core features that most programs need
- However, the concepts behind these features are a little advanced
- For now, we'll use a `boilerplate`

---

# The C++ `Boilerplate`

`Boilerplates` are basically starter kits for code. They exist in almost every language and every framework. A `boilerplate` helps us get started faster and easier; this is what one looks like for C++:

```
#include <iostream>

using namespace std;

int main(){

	// all your code goes here

	return 0;
}

```

---

# COUT 1/2

Remember the 3 stage model of a computer program? `input` -> `processing` -> `output`?

One of the basic ways a C++ program outputs is to our `terminal`. This is via the `cout` object. Here's what it looks like:

```
cout << "Hello World";
```

---

# COUT 2/2

You can `cout` multiple variables, even of different types, in the same statement by chaining the `<<` operator:

```
cout << "I am " << 25 << " years old";
```

*Pay attention* to the spaces in your string. Remember, a computer can only do what you tell it to and if you leave out a space, it will leave out a space as well.

---

# Newlines 1/2

- The `terminal` the most basic interface between a coder and a computer program
- It is like an old school typewriter: whatever it is told to print, it will print that
- Also like a typewriter, you have to tell it when to start a new line. This can be done in two ways: `'\n'` and `endl`. Whenever a program encounters these, it will start a brand new line.
- *note*: the `terminal` is also sometimes called the `command line`, `command prompt`, `console`, or `shell`. The terms are used farely interchangeably.

---

# Newlines 2/2

Consider the following lines of code. How would the output look like?

```
cout << "Today is a wonderful day.";
cout << "Today is\na wonderful day.";
cout << "Today is" << endl << "a wonderful day.";
```

---

# Input via CIN

- Just like out `cout` achieves the `output` stage of a program, we can use `cin` to take `input`.
- This will wait for the user to type into the `terminal` and press `enter`
- It looks like this:

```
int year;
cin >> year;
```

---

# Code Along
Let's examine a sample program and expand it to practice some of what we just learned.

[Program 1-1](https://replit.com/@jonchin/2022-fall-cs-151-mowe-program-1-1)

---

# Action Items

- Begin reading Chapter 2 except pages 193-206 and 233-236.
- [Checkpoint Assignment 2](https://replit.com/@jonchin/2022-fall-cs-151-mowe-checkpoint-assignment-02). Due 2022-09-21

---

# Homework Lab

---

# Sample Code

[Calculate Age Example](https://replit.com/@jonchin/2022-fall-cs-151-mowe-sample-code-03)
