---
theme: default
paginate: true
---

# 03 Foundations in Computer Science
2024-02-05

---

# Review
## What is 1 thing you remember about last class?

---

# The CPU

- `Central Processing Unit`
- responsible for all of the calculations / `processing`
- can only process one instruction / `statement` at a time
- but can process them FAST
  - for reference, an M1 chip can execute 11 trillion operations per second
  
---

# The CPU vs The Human Brain

- CPU is FAST
- CPU never makes mistakes
  - unless hardware failure
- however, CPU is dumb
  - can only execute instructions given to it

---

# Main Memory

- known commonly as `RAM`
  - `Random Access Memory`
- acts as 'scratch pad' or workspace for the `CPU`
- fast but small and `volatile`
  - when computer is powered off, anything in RAM is lost

---

# Secondary Storage

- a way to save data when computer is powered off
- can take many forms: `hdd`, `sdd`, `flash drive`, etc
- much slower than `RAM`

---

# Main Memory vs Secondary Storage

- it is important to understand how `secondary storage` works
- however, that is beyond the scope of our course
- we'll focus on how `RAM` works
- in our course, when we say `memory`, we will usually be referring to `main memory` / `RAM`

---

# Programming Languages

- well defined, formal way for humans to provide instructions to computers
- many different programming languages based on:
  - purpose, eg web development vs server development vs machine learning
  - platform, eg embedded systems vs servers
  - time. some languages are no longer used anymore
- distinction between `high level` and `low level` languages

---

# Low Level Languages

- written in a way that's easiest for `CPU` to understand
- represented by 0s and 1s
- also known as `binary` code
- very difficult for humans to understand

---

# High Level Languages

- written in various programming languages like `C++`, `python`, and `nodejs`
- these languages resemble English in many ways
- allow for complex logic in `low level language` to written in a few lines of `high level language`
- very easy for humans to understand

---

# Language Conversion

- `high level languages` need to be converted to `low level languages`
- done through the `compiler`
  - related to terms `compile` and `compilation error`
- starts with `source code`
- ends with an `executable file`
  - there are some steps in the middle we'll gloss over
- if there are `errors`, the `compiler` won't finish
  - no `executable file` will be produced

---

# Language Components

---

# Keywords

- also known as `reserved words`
- certain words understood by the compiler that have a special meaning
- cannot be changed
- as a programmer, you will have to create your own `variable names` and `function names`; these **cannot** be an existing keyword
- every programming language has its own set of `keywords`; often, they are the same or similar to other languages

---

# Keyword Examples

```
function
int
double
for
while
do
return
```

---

# Operators

- symbols that define a particular transformation of data
- many are familiar: `=`, `+`, `-`, `/`, and `*`
- some are unfamiliar: `++`, `!`, `&&`, and `||`

---

# Statements

- a complete instruction that a computer can take action on
- most statements in C++ **must** end with a `;`

---

# Lines and Whitespace

- to make code easier to `write` and to `maintain`, statements can be broken across many `lines`
- we can use `whitespace` like `newlines` (line breaks), `tabs` (indentation), and spaces
- most computer languages will ignore whitespace

---

# Lines and Whitespace Example

```
// each of the following does the exact same thing
// which is easier to read and maintain?

for(int index = 0;index < 10;index++){cout << index;}

// or 

for(
  int index = 0;
  index < 10;
  index++){
    cout << index;
}
```

---

# Variables

- for computer programs to be valuable, they need to be able to solve a wide variety of problems
- they need to solve for many different kinds of `inputs`
- data that can be changed is stored as a `variable`
- we'll look at variables more in dept later on

---

# Types of Errors

- `syntax` or `compilation` errors - some fundamental rule of the programming language is wrong
  - code will `not` run
- `logic` errors - some mistake in the reasoning but not logic
  - may produce the wrong output
  - eg: printing an image upside down or adding 1 instead of subtracting 1
- `runtime` errors - issues that only come up under specific circumstances
  - can result in incorrect output
  - can cause entire program or even machine to crash
  - eg: dividing by 0

---

# Psuedocode

- general overview of the problem solving approach
- similar to a plan or table of contents
- does not have to be written in a programming language
- helps when coding complex programs
- very important soft skill

---

# For Next Week

- read Chapter 2
- quiz on first half (2.1 - 2.8)
- assignment will be posted
