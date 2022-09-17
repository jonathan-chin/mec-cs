---
theme: default
class: invert
paginate: true
---

# 02 - C++ Syntax
2022-09-12

---

# Keywords

In order for the computer to understand our instructions, there are certain English words that are special and contain a specific meaning. These are called `reserved words` or `keywords` and can only ever mean one thing.

In writing code for a computer, you will create a lot of variables and functions; these can be named almost anything **except** for a keyword.

Every programming language has its own set of `keywords`. Often, they will be the same or similar as other languages. C++ has 95 keywords but we only use a handful on a regular basis.

---

# Operators

Operators are symbols (one or more in a row) that define a particular way to transform data. Some are easily recognizable:

`+`, `-`, `/`, and `*` are operators and work the way you imagine

`++`, `^`, `&&`, and `||` are also operators

Many programming languages share the same operators!

---

# Lines and Statements 1/2

A statement in programming is a complete instruction that the computer can take action on. However, what humans and computers can easily understand is sometimes vastly different. All statements in c++ `must` end with a `;`.

To make it easier for humans to read, write, and maintain code, a statement can be broken across several lines using a `new line character` (the enter button).

---

# Lines and Statements 2/2

Both of these `code blocks` are exactly the same:

```
for(int index = 0; index < 10; index++){cout << index;}
```

```
for(
  int index = 0;
  index < 10;
  index++){
    cout << index;
}
```

---

# Whitespace

Just like `new lines` help make code easier to understand for humans, there are other characters that can be used as well. These are the `space` and `tab` characters.

In many languages, the computer will ignore whitespace so you can write code in any shape that is easiest for you. Please note, `some languages do not ignore whitespace` and count it as part of its syntax rules. One notable language is Python.

---

# Variables

Since computer programs process large quantities of data, there needs to be a way to easily manage it all. `Variables` serve as vritual boxes where different pieces of data can be stored. These variables or boxes can be created, deleted, and changed on the fly. Variables need to have a `name`, which can be nearly any word that you want to use that makes sense.

Remember, you cannot use an existing `key word`!

---

# Variable Declaration

In order to start using a variable, you need to write a `statement` that lets the computer know what kind of variable you are using. This is usually in the form of `variable_type variable_name`. (more on variable types next week!) This is called `declaring a variable`. Here's an example:

```
int age;
```

Once `declared`, you can start using that variable:

```
age = 20;
age += 5;
```

---

# Variable Declaration and Initialization

Often, you will want a variable to start off with a particular value. This is called `initialization`. You can `declare` and `initialize` in a single `statement`:

```
string day_of_week = "Saturday";
```

---

# Code Along

Let's write a simple c++ program from scratch!

---

# Action Items

- [Programming Assignment 1](https://replit.com/@jonchin/2022-fall-cs-151-sa-programming-assignment-01). Due date TBD.
