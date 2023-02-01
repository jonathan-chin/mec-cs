---
theme: default
paginate: true
---

# 03 - Variables
2023-02-01

---

# Review
## What is 1 thing you remember from our last class?

- learned how to create integer variables
- `\n` to make your code more readable for user
- `std::cout` is how we output / display to the user
- `std::cout` is used with `<<` to send variables to output
- `int main()` is primarily where your code exists
  - later on, we'll write more functions
- `#include` is preprocessor directive is used to copy and paste a library
- `using namespace std;` is used in our textbook but is bad practice
- `hardcode` - setting a variable to a specific value in code
- `comments` - `//` for a single comment; `/* */` for multiple line comment
  - explains code for other people who might be reading it
- most statements will end with a `;`
- difference between `statements` and `lines`
  - a statement can be in different / multiple lines to make it more readable / maintainable
- memory diagram; variable values can change / be overwritten




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
- the syntax is `variable_type variable_name;`
- if you know right away what value you want to hold, you can set it in the same `declaration` statement
  - this is called `initialization`
- once you declare a variable, you do not need to specify its `type` when you use it again

---

# Variable Declaration Example

```
double tax;
double total;
double bill = 11.50;
tax = bill * 0.08;
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

# For Next Week
## [Assignment 01 - Oatmeal Cookie Calculator](https://replit.com/@jonchin/02-Assignment-Oatmeal-Cookie-Calculator)
