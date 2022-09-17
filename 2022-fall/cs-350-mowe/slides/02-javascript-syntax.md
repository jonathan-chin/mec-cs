---
theme: default
class: invert
paginate: true
---

# 02 - Javascript Syntax
2022-09-12

---

# A Brief History of Javascript

- Originally developed in 1995
- Built to give web pages (new in 95!!) more interactivity
- Designed to be `easy` to learn how to write
- We are `constantly` battling with this paradigm decision today

---

# Weakly Typed Language 1/3

What would happen in this block of `c++` code?

```
int main(){
	string name = "Medgar Evers";
	cout << name / 2;
	return 0;
}
```

What about if we did it in `js`?

```
let name = "Medgar Evers";
console.log(name / 2);
```

---

# Weakly Typed Language 2/3

What about this `js` code?

```
let name = "Medgar Evers";
// 100+ lines of random code;
console.log(name / 2);
```

---

# Weakly Typed Language 3/3

- Weakly typed languages have a lower learning curve and make programming language adoption faster (important in 1995)
- Weakly typed languages make it `very difficult` to write complex, well maintained code

---

# Expansion

- `js` was initially confined to the browser runtime environment
- node.js (also called node) was invented in 2009 and brought js server side
- this allowed its expansion into other use cases such as
  - servers (`express`)
  - frontend frameworks (`react` and `angular`)
  - database interface (`sequelize`)

---

# With `js` knowledge alone, you can do nearly anything

---

## We'll be using `js` for the first half of this course.
## Since `node` and `js` have a high level of compatibility, we will often be using node to run our code.

---

# `JS` Syntax Basics

- `js` syntax closely follows c style languages with a few exceptions
- For a complete API and guide, check out [MDN Web Docs](https://developer.mozilla.org/en-US/docs/Web/JavaScript)

---

# Objects

A `js` object is a special built in class that is designed to handle a complex group of related data and functions

---

# Call by Value and Reference 1/2

You may recall memory management in `c++` with `pointers` and `references`. For the most part, `js` does not have these things and calls everything by value. Consider the following code:

```
let my_city = 'New York City';
function change_city(city){
	city = 'Boston';
}
change_city(my_city);
console.log(my_city);
```

---

# Call by Value and Reference 2/2

The only except is with js `objects`. Objects are `always` passed by reference and can be messy to work with. Consider the following:

```
let my_city = {
    name: 'New York City'
};

function change_city(city){
    city.name = 'Boston';
}

change_city(my_city);
console.log(my_city.name);
```

---

# Object Destructuring

When working extensively with objects, it may be easier to `destructure` their properties. This makes referencing object properties faster and offers additional protections.

```
const my_city = {
	name: 'New York City',
	neighborhood: 'Brooklyn
}

function print_city(city){
	const {name, neighborhood} = city;
	console.log(`I'm from ${neighborhood} in ${name}`);
}

print_city(my_city);
```

---

# Code Along
Let's continue our code sample from last week

---

# Tasks

- Programming Assignment 01 due 2022-09-19
