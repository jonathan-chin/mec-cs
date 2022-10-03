---
theme: default
class: invert
paginate: true
---

# 06 - Advanced Concepts in Functional Programming
2022-09-28

---

# First, some quick notes

---

# Fighting in DnD

- A round in DnD consists of each player attacking one monster each
- A monster (for now) will attack one player as the `primary` target, dealing increased damage. Then, the monster can attack `secondary` targets on the player's team for reduced damage.
- In the future, we may have monsters who can only attack a `primary` target and not any other targets
- Good practice in OOP is to not modify another object's values directly. No points were taken off for this.

---

# Part 2 Assignment

- Your assignment for next week is to expand on the current `functional programming` implementation of your DnD engine.
- It's important to understand how a round of fighting will go.
- Questions?

---

# Quick Note - shallow vs deep cloning

- remember! objects in `JS` are weird
- a `shallow clone` of an object will treat nested objects as pointers, thus creating `side effects`
- a `deep clone` will generate a whole new copy of everything, so no `side effects`!
- one strategy is using:
```
Object.assign({}, object_to_copy);
```

---

# structuredClone

- *very new* addition is `structuredClone()`
- creates a deep clone of a `JS` object
- only added to `JS` specs in the last few months
- [MDN Docs](https://developer.mozilla.org/en-US/docs/Web/API/structuredClone)
- make sure you have the correct node version! else, you can use `polyfills`

---

# polyfills

- a small code library that can be loaded on older systems to provide functionality from newer systems
- sometimes you don't have control over the runtime environment, ie a client's computer instead of your own

---

# Common Array Ops in Functional Programming

---

# Array Spread Operator

- We've seen the `...` spread operator with objects before
- It can also be used with arrays in the same way and can `concatenate` arrays
- The order of spread operators is preserved

```
const fruits = ['apple', 'banana', 'cherry'];
const vegetables = ['asparagus', 'brocolli', 'carrot'];

const fruits_vegetables = [...fruits, ...vegetables];
const vegetables_fruits = [...vegetables, ...fruits];
```

---

# Array.prototype.push and Array.prototype.unshift

- You can use the spread operator to "add" a new element onto an array
- Actually, constructing a whole new array

```
const states = ['CA', 'DE', 'FL'];
const states_push = [...states, 'GA'];
const states_unshift = ['AL', ...states];
```

---

# Array.prototype.pop and Array.prototype.shift

- This is trickier because the spread operator is all or nothing. You can't spread some elements and not others
- Combine with `Array.prototype.slice` (which might be impure because it does a `shallow clone`) and `structuredClone` (which is pure) to achieve the same thing

```
const rainbow = ['red', 'orange', 'yellow'];
const pop = rainbow[rainbow.length - 1];
const popped_rainbow = structuredClone(rainbow).slice(0, rainbow.length - 1);

const shift = rainbow[0];
const shifted_rainbow = structuredClone(rainbow).slice(1, rainbow.length);
```

---

# Returning Multiple Variables

- Sometimes, you need to return multiple values
- eg to replicate the original `pop` and `shift` functionality, you need the element removed **and** the new array
- However, functions can only return 1 value!
- This can be achieved with `destructuring`, either as an array or object return value

---

# Returning Multiple Variables - Object Destructuring

```
const pop = (array) => {
	return {
		value: array[array.length - 1],
		new_array: structuredClone(array).slice(0, -1);
	}
};

const laptops = ['mac', 'windows', 'linux'];
const {value, new_array} = pop(laptops);

// object destructuring syntax even lets us rename properties!

const {value: last_laptop, new_array: laptops_left} = pop(laptops);

// REMEMBER! this is sometimes in a recursive loop to prevent having to have tons of new variables

```

---

# Returning Multiple Variables - Array Destructuring

```
const pop = (array) => {
	return [
		array[0],
		structuredClone(array).slice(0, 1)
	];
}

const laptops = ['mac', 'windows', 'linux'];
const [last_laptop, laptops_left] = pop(laptops);
```

---

# protip: object and array destructuring are used a lot in React

---

# Pause for Questions

---

# Curried Functions 1/2

- Sometimes, we might have a function with many arguments and want to have an easier, more convenient way to call it
- We can create a `curried function` that will automatically supply 1 or more of those inputs

```
const pay_employee = (who, how_much) => {
	// code goes here
}

const pay_christmas_bonus = (who) => {
	return pay_employee(who, 1000);
}

// pay_christmas_bonus is a curried function
```

---

# Curried Functions 2/2

- Deeply rooted in mathematical concepts
- Named after mathematician Haskell Curry, who has 3 (!) programming languages named after him

---

# Higher Order Functions (HOFs)

- Final major concept in `FP` is `HOFs`
- A `HOF` is a function that takes a function as 1 or more arguments AND/OR returns a function
- When returning a function, `HOF` can be used as `inheritance` in OOP

```
const pay_employee = (person, amount) => {
	// code to pay the employee
}
const charge_company = (company, amount) => {
	// code to charge the company
}

const issue_paycheck = (person, company, amount) => {
	return 
}


```

---

# HOFs

- Some of the functions we've looked at before are `HOFs`
- `map` and `filter` take functions as their input

```
const grades = [43, 74, 51, 85];
const is_passing_grade = (grade) => {return grade >= 65;};
// alternatively can be written
// const is_passing_grade = grade => grade >= 65;

const passing_grades = grades.filter(is_passing_grade);

const add_extra_credit = (grade, amount) => {return grade + amount;};
const curve_grade = (grade) => {return add_extra_credit(grade, 10);}; // curried function
const curved_grades = grades.map(curve_grade);

// note: these lines could be written with all anonymous functions
```

---

# Homework Lab

