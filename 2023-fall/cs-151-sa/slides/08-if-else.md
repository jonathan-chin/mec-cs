---

theme: default
paginate: true

---

# 08 - if / else
2023-10-21

---

# Housekeeping

- midterm clarification: Oct 28
- I'll be participating in NYC AI Public Works Hackathon this Sunday!
  - livestreaming entire event at [twitch.tv/sharemeals](twitch.tv/sharemeals)

---

# Review
## What is 1 thing you remember from our last class?

---

# Relational Operators

- I've been calling them comparators
- compares 2 variables or expressions and evaluates to a `true` or `false`
- the operators are `==`, `<`, `<=`, `>`, and `>=`
- `!` is an operator with only one operand and flips the value of it
  - `true` becomes `false` and vice versa
  - can be combined with the equality operator to make `!=` or `not equal`.

---

# Control Flow

- computers follow instructions from top to bottom, first to last line
- ... most of the time. there are special `control structures` that allow a computer to jump around
- regardless, a computer can `only ever look at one statement at a time`. `control flow` simply determines which statement is next.

---

# if Statements

- `if` statements are another very common `control statement` (part of a larger `control structure`)
- they isolate 1 block of code that will run `conditionally`
- allows the program to jump forward and skip code

```
// example
if(boolean_expression)
{
  // block of code that will run if condition is true
}
```

---

# Code Blocks

- `code blocks` are groups of statements that are somehow related
- isolated by `{` and `}` at the beginning and end
- an `if` statement `**can** have a block of code after it or it can have a single line
- when the condition is true, it will execute:
  - the following code block if there is a `{`
  - or else `only` the following statement
- I suggest to `always` use `{}` after any `control structure`

---

# if Statements and Code Blocks

```
if(9 < 100){
  cout << "This line will execute if true\n";
  cout << "This line will also execute if true\n";
}

if(9 < 100)
  cout << "This line will execute if true\n";
cout << "This line will always execute, regardless of true or false\n.";
```

---

# if else statements

- the `if` control statement can be extended to match both the true and false conditions
- only `one` block of code will execute; the other will be ignored

```
if(today == "Saturday"){
  cout << "Get ready for the weekend!";
}else{
  cout << "It's not Saturday yet";
}
```

---

# else if statements

- C++ allows you to "chain" if else statements

---

```
if(today == "Saturday"){
  cout << "Let's party!";
}else if(today == "Sunday"){
  cout << "Let's party!";
}else{
  cout << "It's not the weekend";
}
```

---

# Nested if Statements

- `nesting` in computer science refers to when something is inside another thing
- a `nested if` statement is an `if` inside another `if` (or `else if` or `else`)

```
if(isWeekend == true){
  std::cout << "it's the weekend!";
    if(today == "Sunday"){
      std::cout << "but Monday is tomorrow";
    }
}

```
---

# Pause for Questions

---

# Break

---

# Coding Lab

---

# For Next Week

- review everything up to 4.5
- bring in any questions about midterm material
- assignment
