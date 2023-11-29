---
theme: default
paginate: true
---

# 13 - More Arrays
2023-11-28

---

# Final Exam Date

Thursday December 14 or Tuesday December 19

---

# Review
## What is 1 thing you remember about last class?

- `array` - data type that holds multiple values of the same data type
  - it is an ordered collection of things
- `arrays` take up continuous spots in memory (RAM)
- exclusively use `[]`
- can assign values to different spots in the array
  - syntax: `temps[2] = -5;`
- remember: array indices start at 0
- `indexing into an array` (ie: reading at spot in the array) - syntax: `temps[0];`
- remember: when declared, arrays still have uninitialized values and cannot be fully trusted
- `index out of bounds` errors
- in C++, arrays don't track their own size
- to declare an array: `int temps[3];`

---

# Code Along - Flash Card Game

Hard code two `parallel arrays` of 10 strings each. The first array will hold a country's name and the second array will hold the corresponding capital city. The indices will align so that the first item in both arrays are paired up, the second item in both arrays are paired up, etc. This is a common `coding pattern` called `parallel arrays`.

Ask the user to enter a number. If they enter -1, exit the program. Otherwise, show them the country name corresponding to that number and ask them what they think the capital is. If they get it right, print out "congrats!". If they don't, print out, "sorry :(". Repeat this until they type -1.

You can assume that the user will not make any typos and will only enter integers between -1 and 9, inclusive.

---

# Problem 1 - Fibb

The Fibbonacci sequence is a famous mathematical sequence of numbers that is self generating. Given 2 starting numbers, every subsequent number is equal to the sum of the 2 previous numbers. Traditionally, the standard Fibb sequence starts with the numbers 1 and 1.

Write a program that asks the user for 3 integers: first how many numbers they want and then the first 2 starting numbers. Generate the Fibb sequence `in an array`, then use a `for loop` to print it out.

You can assume that the user enters at least 2 for how many numbers they want to generate. There are not restrictions on the starting numbers, other than you can assume that all numbers entered are integers.

---

# Problem 2 - Min/Max
