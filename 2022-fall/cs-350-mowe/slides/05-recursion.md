---
theme: default
class: invert
paginate: true
---

# 05 - Recursion and Functional Programming
2022-09-21

---

# Remember

In `FP`, we want to treat `everything` as `immutable`

---

# No Loops!

Our tried and trusted `for` and `while` loops rely on mutation to operate, so we can't use them.

What are our alternatives?

---

# Recursion Replaces While

- A recursive function calls itself conditionally
- Has defined `based cases` that return a predefined values with certain inputs
- Each call `reduces the problem space` (ie gets the program closer to a base case)

---

# Simple Recursion Example

```
// imperative programming
let count_down_imperative = 10;
while(count_down_imperative > 0){
	count_down_imperative--;
}
console.log('done!');

// ------------------

// functional programming;
const count_down_functional = (number) => {
	if(number <= 0){
		say('done!');
	}else{
		return count_down_functional(number - 1);
	}
}
const say = (text) => {
	// isolate impure functions from pure ones
	console.log(text);
}

count_down_functional(10);
```

---

# Limitations of Recursion

- Each recursive call has `overhead cost`
- They persist a small bit of data in memory until the whole chain is resolved

---

# map replaces for ... each

- The general definition of a map function:
  - Takes 2 arguments: an array and a function (*remember functions are first class variables*)
  - Returns an array of the same size with the return value of each element passed into the function
- In `JS`, map is a method of the `Array` class. The first argument (array) is assumed.

---

# map example in `JS`

```
const invert_sign = (number) => {return number * -1;};
// can also be written like this
// const invert_sign = number => number * -1;
// I don't prefer this syntax

const numbers = [24, 71, 59, 44];
const inverted_numbers = numbers.map(invert_sign);
// NOTE: need to store output since .map does NOT mutate current array

```

---

# filter

- Filters are a special case of map functions
- The inputs are the same: an array and a function
- The input function `must` return a boolean
  - In map functions, the input function can return anything
- Filter returns an array that is the same size `or smaller` than the input array
- In `JS`, just like maps, filters are built into the Array object

---

# filter example in `JS`

```
const get_only_passing_grades = (grade) => {return grade >= 65;};
const grades = [45, 91, 37, 0, 80];
const passing_grades = grades.filter(get_only_passing_grades);
```

---

# Method Chaining

- REMEMBER: `function composability` is a key concept in `FP`
- Composability is mixing (or `composing`) several smaller functions to achieve a complex result
- In `JS`, this can be achieved through `method chaining`

---

# Method Chaining Example

```
const remove_short_strings = (string) => {return string.length > 5;};
const capitalize_strings = (string) => {return string.toUpperCase();};
const strings = ['mec', 'medgar', 'medgar evers', 'medgar evers college'];

// intermediate values method
const only_long_strings = strings.filter(remove_short_strings);
const capitalized_long_strings_intermediate_method = only_long_strings.map(capitalize_strings);

// function composition method
const capitalized_long_strings_function_composition_method = strings
	.filter(remove_short_strings)
	.map(capitalize_strings);
console.log(capitalized_long_strings_function_composition_method);

// since .filter and .map return strings, we can chain them together
```

---

# Homework Lab
