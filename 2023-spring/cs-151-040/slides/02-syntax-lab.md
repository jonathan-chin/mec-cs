---
theme: default
paginate: true
---

# 02 - C++ Syntax Lab
2023-01-30

---

# Review
## What is 1 thing you remember from our last class?

- io (input/output)
- what is a computer?
- 3 stage model
  - input
  - process / transform
  - output
- examined errors
  - replit pointed out the error
- using replit to submit our work
- replit is our development environment
- an integrated development environment is all the tools we need to build a particular project
- English (human or natural) syntax vs machine syntax
  - machines / compilers are more sensitive to errors
- forking is making a copy of code

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

# Lines and Whitespace 1/2

- to make code easier to `write` and to `maintain`, statements can be broken across many `lines`
- we can use `whitespace` like `newlines` (line breaks), `tabs` (indentation), and spaces
- most computer languages will ignore whitespace

---

# Lines and Whitespace 2/2

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

# Major parts of a C++ program

- `preprocessor directives` - allows us to run specific actions before compilation, for example to include `libraries`
- `int main()` - the primary function to be run; all C++ programs need this; additional functions may be defined also
- all code should go either inside `int main()` or another function

---

# Coding Lab

