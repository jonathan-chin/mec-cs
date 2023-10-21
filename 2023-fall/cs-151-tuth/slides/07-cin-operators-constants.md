---

theme: default
paginate: true

---

# 07 - std::cin, Operators, and Constants
2023-10-14

---

# Midterm

- Oct 24
- in class, designed for 1-1.5 hours
- will do a last minute review right before
- will be structured like an assignment
- covers material up to (and including) chapter 4
  - only covers some parts of chapter 4

---

# Review
## What is 1 thing you remember from our last class?

- `whitespace` breaks up code
  - organization tool
- `string` deals with text
  - an ordered collection of chars
  - string comparators
    - has its own algorithm
	- eg: `Boston` vs `Austin`, `Boston` is considered "more than" `Austin`
- `char` is a single letter, number, symbol, or `control character`
- `bool` is `true` or `false`
  - `boolean statement` might be 18 > 9
- `pseudocode`
  - helps express thoughts quickly
  - mixture of computer language and human language
  - a way to help plan out code
---

# std::cin

- used to get input (data) from the user
- can be buggy
- `breaks on whitespace`, eg if user enters anything with a space, it may often cause a runtime error
- does not do type checking, eg if you expect the user to enter a number but they enter a word
- for now, assume all user input is perfect
- we'll come back to it later in the semester

---

# Operators

- a symbol / punctuation mark that takes in data, transforms it, and `evaluates` to a new value
- the most common are mathematical operators, eg: `numCars + numTrucks`
- many are `binary`, meaning they take 2 inputs
- some are `unary`, meaning they take 1 input, eg: `count++`

---

# Mathematical Operator Precedence

- C++ generally follows the same rules as Order of Operations
- parentheses `()` can be used for clarification
- rule of thumb is that clarity is most important; when in doubt, use `()`

```
double a = 23 + 94 * 13;
double b = 23 + (94 * 13);
```

---

# Data Type Promotion / Demotion

- when an operator takes inputs of different data types, C++ has to make a decision
- the rules are a little complex
- just be careful about `demotion`, where data can be loss
  - this is `truncation`

---

# Overflow / Underflow

- all data types have a fixed size in memory
- means they have a minimum and maximum value
- eg: in C++, an `int` has a max 2147483647 and min of -2147483646
  - actually, exact number depends on compiler
- if an int variable is increased beyond / decreased below these thresholds, it will `overflow` or `underflow`
- this is because the CPU uses `bitwise` math (beyond scope of this course)
- if it goes higher than max, will flip over to lowest negative value and vice versa
- easily avoided / fixed if you use the correct data type

---

# Named Constants 1/2

- constants are variables whose value is assigned only once and can never change
- use `const` before variable declaration and assignment
- convention is to put variable name in ALL_CAPS
- useful to ensure protect against errors
- useful to improve code readability
- useful when you use the same numbers over and over again
- example: converting several different feet variables to meters

---

# Named Constants 2/2

```
double meter = 3.5;
double feetNoConst = meter * 3.28084;

// or

double meter = 3.5;
const double METER_TO_FEET = 3.28084;
double feetWithConst = meter * METER_TO_FEET;
```

---

# Pause for Questions

---

# Break

---

# Coding Lab

---

# For Next Class

- finish reading Chapter 3 (and review first half)
- read chapter 4.1-4.5
- assignment will be posted
- quiz
