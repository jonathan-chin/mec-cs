---
theme: default
paginate: true
---

# 14 - Midterm Review and Vectors
2023-10-31

---

# Review Midterm

---

# Boosting Midterm Grade

- you use the example midterm code as a reference to fix up anything needed
- keep as much of your original code as possible
- all code must be written by you
- bring old midterm and revised midterm to a tutor and explain changes you made, demonstrating your knowledge
- can get up to 2 extra points on midterm
  - remember: based on 10 point scale
  - depending on tutor evaluation of your demonstration of knowledge
  - cannot get higher than 10
- due before Thanksgiving

---

# C++ Array Issues

- store ordered collection of data types
- con: cannot be dynamically allocated
  - must allocate reasonable amount of memory on declaration
  - if more is needed, need to create a new array and copy over
- con: must track size separately

---

# The Answer: std::vector

- vector class is an implementation that solves these major issues with C++ arrays
- must include `vector` library

---

# Declaring a Vector 1/2

- basic syntax is: `vector<datatype> variableName`
  - eg: `vector<int> temperatures;`
- can also specify size on declaration, just like C++ array
  - syntax: `vector<datatype> variableName(startingSize)`
  - eg: `vector<string> states(52);`
- can also specify starting size and initialize values on declaration
  - syntax: `vector<datatype> variableName(startingSize, initialValue)`
  - eg: `vector<int> scores(10, 0);`

---

# Declaring a Vector 2/2

- can also copy existing vector on initialization
  - syntax: `vector<datatype> variableName(existingVector)`
  - eg: `vector<Card> deck1(deck2);`
- can also specify exact values on initialization
  - syntax: `vector<datatype> variableName {comma separated list of values}`
  - eg: `vector<char> answers {'A', 'A', 'D', 'B'};`
- all of these variations are different constructors
  - `vector<datatype> variableName` is default constructor with no arguments
  - example of OOP `Polymorphism`

---

# Reading Values in Vector

- getting single value uses same syntax as array
  - eg: `answers[2];`
- if need all values, can use `range based for loop`
  - no need to track size!

```
std::vector<boolean> toggles {true, true, false, true, false};
for(bool &toggle : toggles){
  std::cout << toggle;
}

```

---

# Adding Elements to Vector

- public member function `push_back(element)`
- places new element at end/back of array
- automatically updates size
- eg: `scores.push_back()`
- operates in `stack` like fashion
  - more about `stacks` in `Data Structures`

---

# Deleting Elements in Vector

- public member function `pop_back()`
- removes last inserted element
- operates in `stack` like fashion

---

# Getting Size in Vector

- size is generally automatically managed by vector class
- if needed, can use `size()` public member function
- also provides `empty()` for `syntactic sugar`

---

# API

- an API is documentation about how to use an class / service / etc
- a form of encapsulation
  - you only know about public members, including inputs / outputs
  - you don't necessarily know how the output is generated
- [std::vector api is here](https://en.cppreference.com/w/cpp/container/vector)

---

# Code Along

---

# For Next Week

- **Nov 7** will be in person
  - representatives from Google will be on campus from 1:00-2:00pm
  - Nov 9 will also be in person
- read 8.12 Introduction to the STL vector
- assignment on vectors
- quiz next week
- revise midterm if you want
