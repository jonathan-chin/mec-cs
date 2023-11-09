---
theme: default
paginate: true
---

# 14 - Intro to Inheritance
2023-11-09

---

# OOP Principles

- `abstraction` - simplifying complex systems
- `encapsulation` - bundling all the logical components into a single class; protecting internal data
- `polymorphism` - allowing same classes and functions to be used in different ways
- `inheritance` - extending existing code / classes to fit new use cases

---

# Inheritance 1/2

- imagine you're building software to track all of the modes of transportation in a city
  - eg: cars, buses, trucks, trains, bicycles, airplanes
- some of these modes have similar concerns
  - eg: cars, buses, and trucks need to refuel their gas tank
- instead of implementing a `refuel()` member function and its associated member variables 3 separate times, we can use inheritance to keep our code easier to maintain

---

# Inheritance 2/2

- we can create a general `Vehicle` class
- has things like `refuel()`, `maxGas`, `currentGas`, etc
- we can create a `Car` class that `inherits` those members and adds additional members specific to it
- eg: a `Truck` class might also have `cargo`; a `Bus` class might also have a `schedule`

---

# Inheritance Syntax

- when defining a sub class, add `: access_specification parent_class` after the class keyword
```
class Vehicle {
  // other code goes here
}

class Truck: public Vehicle {
  // other code goes here
}

class Bus: public Vehicle {
  // other code goes here
}
```

---

# Access Specification

- there are different ways that a class can inherit from another class
- `public` - only provide access to public members of parent class
- `protected` - only provide access to public and protected members of parent class
- `private` - provide access to all members of parent class
- note: we haven't talked about `protected` members yet!

---

# Access Philosophy

- generally good practice to allow the bare minimum access to data
  - true in OOP, also true in database systems, UI, etc
- by default, make all members private and all inheritance `public`
- don't expose any public members that you don't need

---

# Code Along

---

# What about Bicycles?

- bicycles don't have gas tanks
- but they still share some concerns with vehicles
- both have wheels, both have drivers, etc.
- a class can `inherit` another class but `turn off` some members that aren't relevant

---

# Inheritance in Deck of Cards

- our Deck of Cards library implements near universal needs for a wide variety of card games
- specific games might need to extend functionality by using `inheritance`
- eg: `War` needs to have a discard pile for their players, but otherwise reuses all the code in the Player class

---

# For Next Week

- read 11.11 and 11.12
- assignment posted (for real)
- quiz
