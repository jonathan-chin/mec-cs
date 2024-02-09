---
theme: default
paginate: true
---

# 05 06 - Introduction to C++ and Coding Lab
2024-02-09

---

# Review
## What is 1 thing you remember about last class?

- low level languages are written in a way that's easy for a cpu to understand
  - written as `binary` or `0s and 1s`
- high level languages are very easy for humans to understand and usually uses English words
- high level needs to be converted to low level
  - called compilation, done through a compiler
  - `compilation error` - fundamental rule of the programming language is violated
- psuedocode - general overview of the problem solving approach
  - a draft of how you will write the program
- operators - defines a particular transformation of data
  - `+` and `-` : adds and minuses
- variables - data that can be changed
- logic errors - mistake in reasoning / logic
  - eg: coded `+` instead of a `-`
  - eg: `if(age < 18){allowToVote();}`
- runtime errors - issues that come up under specific circumstances
  - eg: dividing by 0
  - eg: ask the user for their age, they enter a negative number
- syntax / compilation error - the code you wrote violates the rules of the programming language
  - eg: misspelling a variable / keyword
- PEMDAS matters!
- variables can and usually do get changed through code

---

# Variables

- virtual boxes that can hold data that is used multiple times
- need to have a `name`; in C++, the rules are:
  - must begin with letter or _
  - can have any number of letters, numbers, or _
  - cannot contain whitespace or any other punctuation / special character
  - cannot be a `keyword`

---

# Variable Name Practice

- good variable names:
  - num1, num_1, number_1, number_one
  - jon_chin, Jon_Chin
  - myage, myAge, my_age

- invalid variable names:
  - num 1, 1num, 1
  - jon chin
  - my age!
  - for, int, while
  
---

# Variable Declaration

- `declaring` a variable means to let the compiler know you are going to use a variable
- the syntax is `data_type variable_name;`
  - eg: `int number_of_countries;`
- if you know right away what value you want to hold, you can set it in the same `declaration` statement
  - this is called `initialization`
  - eg: `int number_of_countries = 10;`
- once you declare a variable, you do not need to specify its `type` when you use it again

---

# Variable Declaration Example

```
double tax;
double total;
double bill = 11.50;
tax = bill * 0.08;
// tax <- bill * 0.08; // not real C++
total = bill + tax;
```

---

# Variable Declaration Notes

- in some languages, like C++, you can declare multiple variables at the same time: `double tax, total;`
- if you declare a variable `without` setting its value, it will have a `random` and unpredictable value
  - this can cause many bugs!

---

# Tracing a Program

- the practice of mimicking how a computer will `execute` our code
- use pen and paper to go through the `source` code line by line
- model how the `memory state` changes over time
- can be `very` useful when `debugging` (finding and/or fixing errors)

---

# How RAM Works

- series of consecutive "boxes"
  - have `memory addresses` that look like `0x7FFF5FBFFD98`
- a variable can use 1 or more `consecutive` addresses depending on its `data type`
- once a variable is assigned to one or more addresses, those addresses are reserved
- `C++` is powerful but/because has fewer protections
  - possible to overwrite existing addresses, on purpose or by accident

---

# Uninitialized Variables 1/2

```
// what do you think will happen when the following code is run?
int currentYear;
std::cout << currentYear;
```

---

# Uninitialized Variables 2/2

- when you `declare` a variable, all you are doing is receiving a `memory address`
- unsure what already exists in that address
- could be old data from previous program; it is unpredictable
- MUST `initialize` variables before using them

---

# Let's Trace
## [Program 1-1](https://replit.com/@jonchin/Program-1-1)

---

# User Input

- variables are useless if they are always `hardcoded`
- need a way to get `input` so that our code can be `generalized` and `reusable`
- input can come from many sources; let's focus on `user input`
- achieved through `std::cin >> variable`
- always `best practice` to include a prompt
- later on, we will also discuss `user input validation`

---

# Break

---

# Coding Lab

---

# For Next Week

- read Chapter 2
- quiz on second half (2.9 - 2.17)
- assignment will be posted
