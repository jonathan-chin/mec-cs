---
theme: default
paginate: true
---

# 09 - Midterm Review, Logical Operators, Variable Scope, and Loops
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

# Logical Operators

- we can create more complex `boolean expressions` by combining them using `boolean operators`
- these take `bools` and returns a `bool` based on certain rules
- `&&` is the `and` operator and is true if both operands are true
- `||` is the `or` operator and is true if at least one operand is true
- `!` is the `not` operator and will flip whatever the operand is

```
if(today == "Saturday"
  || today == "Sunday"){
  std::cout << "It's the weekend";
}else{
  std::cout << "Can't wait for the weekend";
}
```

---

# Logical Operator Lookup Table

| operator | TT | TF | FT | FF |
| :------: | -- | -- | -- | -- |
| &&       | T  | F  | F  | F  |
| \|\|     | T  | T  | T  | F  |


---

# Blocks and Scope 1/3

- a `code block` is a set of related statements enclosed by `{}`
- variables defined inside that block are only accessible within that block
- variables can also be access in any `nested block`
- however, variables **cannot** be accessed by their `parent block`
- where a variable is valid is called it's `scope` (related term: `variable scope`)

---

# Blocks and Scope 2/3

```
int main(){
  double price = 2.99;
  double bill = 10;
  double change;
  if(price <= bill){
    // this is ok since change is declared outside of block
    change = bill - change;	
  }
  std::cout << change;
}
```

---

# Blocks and Scope 3/3

```
int main(){
  double price = 2.99;
  double bill = 10;
  if(price <= bill){
    double change = bill - change;	
  }
  
  // this is a syntax error since change is declared
  // in a different scope; the compiler
  // doesn't even thing change exists
  std::cout << change;
}
```

---

# Conditional Operator 1/2

- the `if-else` control structure is very common
- coders are lazy
- a shortcut is the conditional operator `? :`
- syntax: `booleanExpression ? valueIfTrue : valueIfFalse`

---

# Conditional Operator 2/2

```
int age = 78;
std::string label = age < 10 ? "child" : "adult";

// or

std::string label;
if(age < 10){
  label = "child";
}else{
  label = "adult";
}
```

---

# Coding Lab 1/2

---

# Intro to Loops

- remember `control flow`
- `if-else` allows us to jump ahead
- `loops` allow us to jump back
- several different variations of loops

---

# while Loop 1/2

- uses keyword `while`
- similar syntax to `if` statement
- if boolean expression (also called `condition`) is true, will execute block
  - then, will check `condition` again and execute if true
  - repeats until `condition` is false

---

# while Loop 2/2

```
int daysUntilVacation = 20;
while(daysUntilVacation > 0){
  std::cout << "Just " << daysUntilVacation << " more days ...";
  daysUntilVacation--;
}
std::cout << "Wooooo!";
```

---

# Infinite Loops 1/2

- since `condition` gets rechecked each time, there's a chance it never ends
- something inside the `code block` must make the `condition` closer to being false
- if not, program may freeze the computer and cause issues
- can be caused by `logic errors`
- still, every coder makes them!

---

# Infinite Loops 2/2

```
int daysUntilVacation = 20;
while(daysUntilVacation > 0){
  std::cout << "Just " << daysUntilVacation << " more days ...";
  daysUntilVacation++;
}
std::cout << "Wooooo!";
```

---

# Coding Lab 2/2

---

# For Next Week

- Google event next week
- read Chapter 5
- assignment
- quiz
- revise midterm if you want
