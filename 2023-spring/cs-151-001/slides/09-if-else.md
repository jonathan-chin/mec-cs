---
theme: default
paginate: true
---

# 09 - If Else
2023-03-15

---

# Relational Operators

- compares 2 variables or expressions and returns a `true` or `false`
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

- `if` statements are another very common `control structure`
- they isolate 1 block of code that will run `conditionally`
- allows the program to jump forward and skip code
- here is the syntax:

```
if(some_expression_that_returns_a_bool)
{
  // block of code that will run if condition is true
}
```

---

# Code Blocks

- `code blocks` are groups of statements that are somehow related
- they are isolated by `{` and `}` at the beginning and end
- an `if` statement `**can** have a block of code after it or it can have a single line
- when the condition is true, it will execute the following code block (if there is a `{` ) or else `only` the following line
- it's my programming style to `always` use `{}` after any `control structure`

---

# if Statements and Code Blocks

```
bool this_is_true = 9 < 100;
if(this_is_true == true){
  cout << "This line will execute if true\n";
  cout << "This line will also execute if true\n";
}

if(this_is_true == true)
  cout << "This line will execute if true\n";
cout << "This line will always execute, regardless of true or false\n.";
```

---

# if else statements

- the `if` control structure can be extended to match both the true and false conditions
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

# boolean operators

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

# nested if statements

- `nesting` in computer science refers to when something is inside another thing
- a `nested if` statement is an `if` inside another `if` (or `else if` or `else`)

```
if(today == "Saturday" || today == "Sunday"){
  if(today == "Sunday"){
    std::cout << "need to prepare for the week";
  }
}

```

---

# Pause for Questions

---

# switch 1/3

- sometimes, we want to make several `==` comparisons
- possible to do with chained `if/else` but can get messy

```
char choice = 'a';
if(choice == 'a'){
	// do something
}else if(choice == 'b'){
	// do something
}else if(choice == 'c'){
	// do something
}else if(choice == 'd'){
	// do something
}
// etc
```

---

# switch 2/3

- `switch` simplifies the syntax and also allows more complex decision making
- new keywords: `switch`, `case`, `default`, and `break`

```
char choice = 'b';
switch(choice){
	case 'a': // execute if choice == 'a'
		// do something
		break; // finished with switch block
	case 'b':
		// do something
		break;
	case 'c': // this will execute code if choice is 'c' or 'd'
	case 'd':
		// do something
		break;
	default: // executed if no other case is matched
		// do something
		break;
}
```

---

# switch 3/3

- pros
  - more compact way to make multiple `if` checks
- cons
  - can only make `==` comparisons
  - in C++, can only check on `char` and `int`

---

# enum 1/2

- sometimes, we want to limit the values that a variable can take in
- very useful as it minimizes error
- effectively creates several `const int` variables

---

# enum 2/2

```
enum season {spring, summer, fall, winter};

// same as
const int spring = 0;
const int summer = 1;
const int fall = 2;
const int winter = 3;
```
---
