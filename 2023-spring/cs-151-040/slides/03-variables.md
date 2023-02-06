---
theme: default
class: invert
paginate: true
---

# 03 - Variables
2023-02-01

---

# Review
## What is 1 thing you remember from our last class?

- creating variables
- keywords are certain words undersetood by the computer that have a special meaning
  - also known as reserved words
  - examples: return, while, int, function, do
- operators are symbols that have a function
  - examples: +, -, =, /, *, !, ||, &&, #, @, .
- how declare and initialize a variable
  - (declare) give a variable a name
  - (initialize) give a variable a value
- statements are complete instructions and usually end with a semicolon
- line breaks / whitespaces
- statements can be broken up across many lines
  - makes writing code easier
  - makes code more legible to read
  - makes friends in the workplace
  - easier to categorize your code, easier to understand and edit
  - easier to `maintain`
- comments are ignored by the computer
- we found the average temperature for 5 days
- a variable type is a category of variables
  - like numerical or words
- add a library
  - code that is already written that can be used in other projects
  

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
  - lucky_number, luckyNumber, LuckyNumber
  - favorite_food, favoriteFood
  - first_name, firstName
  - final_score, finalScore
  - int_schedule (valid but confusing, so try not to use)
    - better is: international_schedule

- invalid variable names:
  - lucky number
  - 1st_name
  - favorite-food
  
---

# Variable Declaration

- `declaring` a variable means to let the compiler know you are going to use a variable
- the syntax is `variable_type variable_name;`
- if you know right away what value you want to hold, you can set it in the same `declaration` statement
  - this is called `initialization`
- once you declare a variable, you do not need to specify its `type` when you use it again

---

# Variable Types

- How many days are there in January?
- What is the average number of days in a month?
- What is your first name?
- What is the first letter of your first name?
- How many is your first name?
- What is the average of your first name?
- What is the first letter of the days in a month?

---

# Not all data is equal
## some operations make sense with some data and not others

- we need to define a `variable type` to describe the data and how we can operate on it
- we also need to define the type so our compiler knows how much space to allocate

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
