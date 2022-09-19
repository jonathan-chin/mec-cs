---
theme: default
class: invert
paginate: true
---

# 03 - Intro to Functional Programming
2022-09-14

---

# Key Vulnerabilities

As we saw last class, there are some key vulnerabilities that can pose a problem when writing complicated code.

Chiefly, it is that data can be manipulated in unpredictable ways, both accidentally and maliciously.

---

# JS Weakness

What do you think is the output of the following code:

```
let pet = 'dog';

function change_pet(){
  pet = 'cat';
}

change_pet();
console.log(pet);
```

---

# The JS Paradigm

These vulnerabilites are a result of JS's history and its paradigm.

Remember: it was developed to only run in browsers and to be easy to pick up.

---

# Side Effects

- When a function modifies data outside of its own `scope`, whether by accident, by necessity, or by malicious intent, this is called a `side effect`.

- Since `side effects` introduce unpredictability, we want to reduce the number of `side effects` our code produces.

- The formal definition is when a function *uses* or *modifies* anything outside of its parameters. This also includes `i/o`!
---

# Best Practice 1 - Whenever you can, use `const`

You can't accidentally modify something if it's constant!

---

# Best Practice 2 - Avoid using mutating functions

There are several built in functions in JS that modify the data in memory.

```
const foods = ['apple pie', 'cheeseburger', 'escargo'];
foods.push('guacamole');
console.log(foods);
```

Instead, there are alternatives!

---

# Best Practice 3 - Remember Objects in JS Call by Reference by Default!

What do you think is the output of the following code?

```
let laptop_one = {
	status: 'fine'
};
let laptop_two = laptop_one;
laptop_two.status = 'on fire!';
console.log(laptop_one.status);
```

---

# Functional Programming - Immutability

- The Functional Programming Paradigm is designed to uphold some key tenets that make code more secure, easier to maintain, and easier to test
- One of these is `immutability`: treat all data as `immutable` or `unchangeable` to prevent `side effects`
- There are others but let's focus on this one!

---

# Handling JS Object Immutability

There are a few strategies to try and make JS Objects immutable

- `Object.freeze()` will make an object constant and all of its properties constant as well. There are some weird interactions here.
- `Object.assign({} /*, other objects*/)` will copy over objects and if the first argument is an empty object literal `{}` then it will mimic `calling by value`
- `...` is the spread operator and provides an immutable way to access the properties of an object
- `destructuring`, which we saw last class, also creates immutable copies of object properties

---

# Code Along
Let's play around with some of these strategies!

---

# Coding Lab
