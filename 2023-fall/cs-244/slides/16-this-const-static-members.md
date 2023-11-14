---
theme: default
paginate: true
---

# 15 - this, const Member Functions, and Static Members
2023-11-14

---

# Review
## What is 1 thing you remember from last week?

- `inheritance`
  - having a base class for a child class
  - reusing and extending existing classes
  - takes its `accessible` members
  - use it because some classes might share similar concerns and we don't want to duplicate code
  - example: `class Child : public Base{}`
  - a child class can `override` or redefine any member function in the base class
- `access specification`
  - determines which members of the `base` class can be accessed in `child` class
  - 3 different values: `public`, `protected`, and `private`

---

# this keyword

- used inside a class
- refers to the object once instantiated
- holds the address in memory
- probably not needed this semester but could be used in the future

---

# const Member Functions

- similar to `const` variables, class member functions can be declared as `const`
- indicates that the function treats all member variables as const
- good security practice, similar to making all member variables private by default and all inheritance access specifiers public by default

---

# Static Member Variables

- generally, once a class is instantiated, the object has its own copy of member variables
- each object is independent of the other, despite sharing the same structure
- sometimes useful to have a variable shared across all objects
- this is called a `static member variable`
- changing this variable changes its value for **all** objects

---

# Static Member Functions

- similar to static member variables
- can be called when no objects exist yet

---

# Coding Lab

---

# War
