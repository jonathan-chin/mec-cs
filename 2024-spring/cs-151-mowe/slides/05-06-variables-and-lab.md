---
theme: default
paginate: true
---

# 05 06 - Variables and Lab
2024-02-14

---

# Review
## What is 1 thing you remember about last class?

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

# Coding Lab

---

# For Next Week

- no class on Monday!
- read Chapter 2
- quiz on second half (2.9 - 2.17)
- assignment will be posted
