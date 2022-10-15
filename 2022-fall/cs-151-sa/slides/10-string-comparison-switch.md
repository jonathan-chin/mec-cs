---
theme: default
paginate: true
---

# 10 - Decision Making
2022-10-15

---
# Comparing characters and strings 1/4

- the comparators in C++ are `overloaded`, meaning they can be applied to different 
- in the past, we've used comparators with `int`
  - eg: `miles == 37`, `hours < 10`
- they can also be used with `chars` and `strings`

---

# Comparing characters and strings 2/4

- with `==` and `!=`, they operate how you would expect
  - `initial == 'J'` or `state != "New York"`
  - remember! uppercase and lowercase letters are considered different
  - `'a' == 'A' // returns false`
- with `<` and similar comparators, they look at the characters `ASCII` values
  - for the full table, you can review the [wiki page](https://en.wikipedia.org/wiki/ASCII)

---

# Comparing characters and strings 3/4

in general:
1. punctuation and spaces go first
2. numbers go next (in numerical order)
3. uppercase letters go next (in alphabetical order)
4. lowercase letters go next (in alphabetical order)

---

# Comparing characters and strings 4/4

How would this list of strings be `ordered`?
- border
- Change
- _balance
- commodity
- CHANNEL
- Boston
- Charge
- 44 Percent

---

# Conditional Operator

- there is a special pair of operators: `?` and `:`
- must be used together
- shortcut for `if/else` when evaluating an expression
- syntax: `conditonal ? if_true : if_false`

---

# Conditional Operator Example

```
string password = "ReallyStrongPassword";
string password_attempt;
cin >> password_attempt;

// option 1 with if/else
bool is_password_attempt_correct;
if(password_attempt == password){
	is_password_attempt_correct = true;
}else{
	is_password_attempt_correct = false;
}

// option 2 with conditional operator
bool is_password_attempt_correct_conditional = (password_attempt == password) ? true : false;
```

---

# Switch 1/3

- sometimes, we want to make multifaceted `==` comparisons
- possible to do with chained `if/else` but can get messy

```
string state = "New York";
if(state == "Alabama"){
	// do something
}else if(state == "Washington"){
	// do something
}else if(state == "Maryland"){
	// do something
}else if(state == "New York"){
	// do something
}

```

---

# Switch 2/3

- `switch` simplifies the syntax and also allows more complex decision making
- new keywords: `switch`, `case`, `default`, and `break`

```
string state = "New York";
switch(state){
	case "Alabama": // execute if state == "Alabama"
		// do something
		break; // finished with switch block
	case "Washington":
		// do something
		break;
	case "New Jersey": // this will execute code if state is NJ or NY
	case "New York":
		// do something
		break;
	default: // executed if no other case is matched
		// do something
		break;
}
```

---

# Switch 3/3

- Pros
  - more compact way to make multiple `if` checks
  - can easily represent some complex language (stacked `case` statements, `default` case)
- Cons
  - can only make `==` comparisons

---

# Enum 1/2

- sometimes, we want to limit the values that a variable can take in
- very useful as it minimizes error
- effectively creates several `const int` variables

---

# Enum 2/2

```
enum seasons {spring, summer, fall, winter};

// same as
const int spring = 0;
const int summer = 1;
const int fall = 2;
const int winter = 3;
```

---

# Coding Lab
