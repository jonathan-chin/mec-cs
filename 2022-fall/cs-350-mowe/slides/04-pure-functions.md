---
theme: default
class: invert
paginate: true
---

# 04 - Pure Functions
2022-09-19

---

# Review of Functional Programming Paradigm

- Avoid Side Effects
- Prefer Immutability

---

# `Pure` and `Impure` Functions

In `FP`, functions are considered `pure` if they:

- always returns the same output for identical input. This means no dependency on outside variables.
- no side effects.

Additionally, they should treat their inputs as `immutable`.

By contrast, anything that doesn't qualify as a `pure` function is `impure`.

---

# Examples of `Impure` Functions

```
let name = 'Barack Obama';

function get_first_name(){
	return name.split(' ')[0];
}

function get_last_name(){
	return name.split(' ')[1];
}

let first_name = get_first_name();
let last_name = get_last_name();


```

---

# How We Can Rewrite It

```

function get_first_name(name){
	const parts = name.split(' ');
	return parts[0];
}

function get_last_name(name){
	const parts = name.split(' ');
	return parts[1];
}

const name = 'Barack Obama';
const first_name = get_first_name(name);
const last_name = get_last_name(name);

```

---

# `Impure` Functions in JS

Many of the common functions we use are actually `impure`:

- Math.random()
- Date.now()
- array.push()
- array.sort()
- console.log()
- functions that fetch from an API
- functions that save to the disk

---

# Mixing `pure` and `impure` functions

As you can see, many `useful` JS functions are impure. Although `FP` *prefers* `pure` functions, it is not limited to them. You can mix them but:

- try to separate them as much as possible
- try to minimiize `impure` functions

---

# Practical Example of `Impure` Functions


```
function flip_coin(){
	if(Math.random() < 0.5){
		console.log('heads');
	}else{
		console.log('tails');
	}
}

flip_coin();
```

---

# How We Can Rewrite It as a `Pure` Function

```
function get_random_number(){
	return Math.random();
}

function call_heads_or_tails(probability){
	if(probability < 0.5){
		return 'heads';
	}else{
		return 'tails';
	}
}

function flip_coin(){
	const random_number = get_random_number();
	const heads_or_tails = call_heads_or_tails(random_number);
	console.log(heads_or_tails);
}

flip_coin();
```

---

# Function Composability

- The `FP` paradigm is highly grounded in math concepts
- One such concept is `Function Composition` where smaller functions can be combined to make more complex ones
- Here's how the previous `pure` function can be rewritten:

```
console.log(call_heads_or_tails(get_random_number()));

// or

console.log(
	call_heads_or_tails(
		get_random_number()
	)
);
```

---

# `Pure` Inputs

A `pure` function should treat its inputs as immutable. Consider the following:

```
// impure function

const person = {
	first_name: 'Vernon',
	last_name: 'Williams'
}

function add_full_name_impure(person){
	person.full_name = `${person.first_name} ${person.last_name}`; // uses string composition
	return person;
}

function add_full_name_pure(person){
	return {
		...person, // uses spread operator to keep original properties
		full_name: `${person.first_name} ${person.last_name}`
	}
}

```

*What is happening in the `pure` function?*

---

# What do you think are the pros and cons of `pure` functions?

---

# Analysis

Pros:
	- easier to test
	- can be memoized (improve performance)

Cons:
	- doesn't work well with IO
	- code needed to update a variable can get messy

---

# Pause for questions

---

# Key `FP` Concept: Functions Are First Class

- in `OOP`, objects are first class. in `FP`, functions are first class
- this means functions can be assigned to variables, passed in as arguments, and returned from other functions
- for this to happen, we need to use the `anonymous function` syntax

---

# Anonymous Function Syntax

```
// traditional way
function(inputs){
	// do something
	return something;
}

// 'arrow' or 'fat arrow' notation shortcut
(inputs) => {
	// do something
	return something;
}

// arrow notation is more common
```

---

# Example of First Class Function

```
const is_even = (number) => {return number % 2 === 0;}
const is_odd = (number) => {return number % 2 === 1;}
const is_guess_correct = (number, guess, comparison_function) => {
	return guess === comparison_function(number);
}

const turn = (number, guess) => {
	return is_guess_correct(number, guess, is_even);
};

const game() => {
	const result = turn(
		Math.floor(Math.random() * 100), // get random int 0-100
		Math.random() < 0.5 // randomly get true or false
	);
	if(result){
		console.log('You guessed correctly!');
	}else{
		console.log('You guessed incorrectly');
	}
);

game();

```

---

# Code Lab
