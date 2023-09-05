---
theme: default
paginate: true
---

# 03 - Terminology and Understanding
2023-09-05

---

# Review
## What is 1 thing you remember from our last class?

---

# Major Hardware Components

- `CPU` or Central Processing Unit is responsible for all the calculations to be done
- `RAM` or Random Access Memory is the `primary memory storage` that is used by the CPU
- `Secondary Storage` are things like harddrives, USB drives, and SSDs
- `RAM` is for right here and right now; gets erased when the computer powers off
- `Secondary Storage` is long term; data is available when the computer powers on again
- in this class, when we talk about `memory`, we are almost always referring to `RAM`

---

# Programming Languages

- computers can only understand `machine code`or binary
  - example: `0100 1010 1110 1001`
- humans can use a `high level programming language` that looks close enough to English
  - for us, this language is C++
- this is called `source code`
- a special program called a `compiler` will try to convert the programming language into an intermediate stage called `object code`
  - if there are `syntax errors` or errors against the rules of the language, it will `not` compile
- a special program called a `linker` will then take that `object code` and make an `executable file`
- note: repl.it's green play button does all these things at once: compiles, links, *and* runs

---

# Variables

- remember: programs are all about taking input, manipulating or transforming it, and sending it out
- in order to track all that data, programmers can create `variables`
- **almost** any combination of letters and numbers are valid to use as a variable name

---

# Variable Name Rules

- can only include letters, numbers, and underscore
- must start with a letter
- case sensitive
- cannot be a `keyword`
- examples of valid variable names: `population`, `Population`, `pop`, `CanadaPop`, `Canada_population`, `pop_1983`
- examples of invalid variable names: `1983_population`, `population%`, `Canadian population`

---

# Keywords

- a `keyword` is a special word that has a predefined meaning in the programming language
- also known as a `reserved word`
- it **cannot** be used as a variable name
- every programming language has its own list of keywords
- C++ has 95 keywords

---

# Operators

- usually symbols that look like punctuation
- define what to do with variables / data
- some operators are self explanatory: `+` and `-`
- most important operator is `=`, probably not what you think

---

# Lines and Whitespace 1/2

- source code is ultimately translated into machine code
- primary purpose is to be easy to read and edit for us
- for the most part, `whitespace` (spaces, tabs, and line breaks) are ignored
- we can use as much whitespace as we want
- the following snippets of code are the same

---

# Lines and Whitespace 2/2

```
for(int i = 0; i < 10; i){std::cout << i;}

// is the same as

for(
	int i = 0;
	i < 10;
	i++
){
	std::cout << i;
}
```

---

# Lines and Statements

- a `statement` is a full, complete instruction for the computer
- a `statement` can be broken down across multiple `lines` or just 1 `line`
  - for example, to be easier to read
- a `statement` in C++ **must** end with a `;`

---

# Comments

- while source code is written in a human friendly way, it still follows strict rules
- sometimes we just need "scratch paper" to think things out or to leave notes
- this is where `comments` come in
- in C++, comments either start with `//` for short ones or start with `/*` and end with `*/` for long ones
- a good habit to build is to generously comment your code

---

# Psuedocode

- sometimes, the problem we are trying to solve is incredibly complex
- we need to plan it out for ourselves and/or explain it to someone else
- `pseudocode` is half code half notes
- outlines the general approach to solve a problem

---

# Different Error Types

- `syntax error` is a violation of the rules of the programming language. code with `syntax errors` cannot run
- `runtime error` is a problem that arises when running the code under specific conditions and/or inputs; it may look fine but crash in certain instances
  - example: division works for almost every number, except 0
- `logic error` is a problem in the design of the code; it runs and doesn't crash but does not produce the expected output
  - example: a program counts down when it should count up

---

# Pause for Questions

---

# Break

---

# Introduction to Variables

- `variables` are ways for us to track data
- before we use one, a variable must be `declared`
- `declaring` a variable will set aside a spot in memory (RAM) that we can manipulate
- `declaring` a variable is done by putting its `data type` followed by its name and a `;`
  - example: `int year;`
  - (more on `data types` next week)

---

# Using Variables

- once `declared`, you can set its value
- think about this as putting data inside the bucket of memory
- this is done by using the `=` operator, also called the `assignment operator`
  - example: `year = 2023;`
  - some languages use the `<-` operator instead of `=`
  - this better illustrates what is happening (2023 is being put into the memory bucket named "year")

---

# Coding Lab

---

# For Next Week

- Reread Chapter 1
- Review these slides!
- Programming Assignment due next week
- Quiz on Chapter 1 next week
