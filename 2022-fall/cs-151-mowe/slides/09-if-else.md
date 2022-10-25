---
theme: default
class: invert
paginate: true
---

# 09 - If Else
2022-10-17

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
- you've seen one `control structure` already: functions

---

# Control Flow with Functions

```
// trace the following code

string get_name(string message){
	string input;
	cout << message;
	cin >> input;
	return input;
}

int main(){
	string first_name;
	string last_name;
	first_name = get_name("What is your first name?");
	last_name = get_name("What about your last name?");
	cout << "Hello " << first_name << " " << last_name << "\n";
}
```

---

# if Statements

- `if` statements are another very common `control structure`
- they isolate 1 block of code that will run `conditionally`
- here is the syntax:

```
if(some_condition_that_returns_a_bool)
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
if(this_is_true){
	cout << "This line will execute if true\n";
	cout << "This line will also execute if true\n";
}

if(this_is_true)
	cout << "This line will execute if true\n";
cout << "This line will always execute, regardless of true or false\.";


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

- c++ allows you to "chain" if else statements
- not very common because the logic can get messy and hard to follow
- `nested ifs` or `switch` statements are more common.

---

```
if(today == "Saturday"){
	cout << "Let's party!";
}else{
	if(today == "Sunday"){
		cout << "Let's party!";
	}else{
		cout << "It's not the weekend";
	}
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
	cout << "It's the weekend";	
}else{
	cout << "Can't wait for the weekend";
}
```

---

# Coding Lab

---

# Homework Lab
