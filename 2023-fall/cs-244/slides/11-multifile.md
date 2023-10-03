---
theme: default
paginate: true
---

# 11 - Multifile Projects
2023-10-03

---

# Review
## What is 1 thing you remember from last week?

- `passing by reference` - memory address is given as an argument to a function
  - less memory use
- `passing by value` - copies entire argument
  - `passing by reference` only gives memory address
- pseudocoding - breaking down the code into simple English
  - can make program simplified so it can be more easily interpreted in code
- `pass by constant reference` - giving a memory address as an argument but **not** allowing that address to be modified
- `object composition` - using objects / classes in other objects / classes
- `include guards` / multiple files
---

# Midterm

- Oct 26
- coding problem, just like assignments
- will have entire period

---

# #ifndef

- because of modularity of OOP, might have a class included multiple times
- will cause compile errors (redefinition)
- for example: a Train class and Bus class both need to include the Passenger class
- effectively an if statement for your `preprocessor`

---

# ifndef syntax

```
// Passenger.h

#ifndef PASSENGER_H // if already defined, skip rest of code
#define PASSENGER_H // not defined so define it for future
// all your code here
#endif
```

---

# compiling multiple files

- if one file depends on another via `#include`, both files need to be compiled
- then, the object files need to be linked
- easiest way to do that is include multiple `.cpp` files in your `g++` command
- example: `g++ main.cpp Bus.cpp Train.cpp Passenger.cpp -o transit.out`

---

# Code Along
## Building a Deck of Cards

---

# Coding Lab

---

# For Next Week

- review these slides and example code
- read 10.1-10.5
- programming assignment to be posted
- quiz
