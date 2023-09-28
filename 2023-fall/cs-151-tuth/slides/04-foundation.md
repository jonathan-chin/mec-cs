---
theme: default
paginate: true
---

# 04 - Foundations in Coding
2023-09-12

---

# Review
## What is 1 thing you remember from our last class?

- statements must end with a ; (semicolon)
- capitalization matters
- RAM is temporary memory and goes away when the computer turns off
  - primary memory storage
  - whenever we use the word `memory` we are almost always referring to RAM
- comments are important
  - help you with trouble shooting
  - `//` or `/* */`

---

# Vocabulary

- `declaring` a variable announces to the computer that you need some space in memory
- ` initializing` a variable provides it with a value for the first time
  - `uninitialized` variables are DANGEROUS
- coders are lazy! you can `declare` and `initialize` in the same line

---

# Declaration and Initialization

```
int votes; // declaration
votes = 32; // initialization
votes = 72; // update, assign, set, etc

// or

int days = 31; // declaration AND initialization
```

---

# Variable Names

- just like comments, everyone / every language has their own philosophies (or even rules!) on variable names
- universally accepted that variables names should be descriptive
- which of the following do you think is the most descriptive variable name?
  a. `int days_in_february;`
  b. `int d;`
  c. `int feb_days;`
  d. `int daysFeb;`
  e. `int FebDays;`
- I have my own style and it's what you'll be exposed to most often

---

# Common Variable Name Formats

```
int days_in_february; // snake case
int daysInFebruary;   // camel case
int DaysInFebruary;   // capital case
int DAYS_IN_FEBRUARY; // upper case

// less common formats
int days-in-february; // kebab case
int daysinfebruary;   // flat or mumble case
```

note: your programming language and company may have its own `style` guide and recommenations

---

# Memory Trace

- also known as `program trace` or just `trace`
- way of manually tracking variables and values over the course of a program running
- helps uncover `logic` and `runtime errors`, which are notoriously difficult
- mimics the way a computer "thinks"
  - makes us better `debuggers` and programmers

---

# Memory Trace Example
## tracking a score board

```
// tracking scores of players across a basketball game

int carmello;
int lebron;
int kobe;
carmello = 0;
lebron = 0;
kobe = 0;
carmello = 3;
carmello = carmello + 2;
carmello += 2;
// evaluate then assign
std::cout << lebron;
```



---

# Expected Output

- it's best practice to have an `expected output` that you look for **before** you run a program
- will require you to "hand solve" the problem at least once
- if answers match, you are likely good to go
- if answers differ, you may have a `logic error`
- first step in researched based programming education approach: [`PRIMM`](https://primmportal.com/)

---

# Comments

- for the benefit of yourself and others
- generally can use poor grammar, shortcuts, and brevity
- can explain one statement or the next X statements
- at this stage in your career, better to **over comment** than to **under comment**

---

# Coding Lab

---

# For Next Week

- read Chapter 2
- assignment posted tonight
- quiz on Chapter 2
