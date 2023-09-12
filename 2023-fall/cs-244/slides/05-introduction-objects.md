---
theme: default
paginate: true
---

# 05 - Introduction to Objects in C++
2023-09-12

---

# Review
## What is 1 thing you remember from last week?

- an array is an ordered collection of whose data types are identical with fixed size
- similar to lists
- accessed via index
- functions complete a task; can be called at a later time
- a function can also be `void`

---

# Function and Function Prototype

```
// function prototype
double square(double);


// generally called a function definition
double square(double number){
	return number * number;
}
```

---

# Procedural Programming

- code is generally executed in a sequential, top down fashion
  - exceptions for `control flow` statements like loops and function calls
- is `imperative`, describing the **exact** way things should be done
- very common `paradigm`; most likely what you learned and know
  - a `programming paradigm` is a fundamental style and philosophy on how to structure code

---

# Procedural Programming Pitfalls

- difficult to build in sufficiently complex environments
- difficult to maintain and upkeep over time
- difficult to keep data secure

---

# Example 1

- imagine you are building a basketball game simulator
- sufficient enough to keep all data as arrays
  - eg an array of all games and their final scores
- easy to scale
  - more teams? bigger array

---

# Example 2

- imagine you are building software to track a bank's customers
- cannot store bank balances in an array
  - customer A could access / mutate customer B's balance
- have to deal with many complexities
  - imagine all customers need to be charged a banking fee
  - customer A can charge on checking account
  - customer B needs to charge on savings account
  - customer C cannot afford to pay and must be closed
  - code needed for this can be complex and hard to maintain over time

---

# Objects!

- another popular programming `paradigm` is `object oriented programming`
  - often called `OOP`
- as the name suggests, centers on `objects`
- an `object` is a collection of variables and functions that are related
- different than an `array` which can only hold values of the same type

---

# Benefits of OOP

- `encapsulation` - provides security
- `abstraction` - simplifies complexity
- `inheritance` - promotes code reuse
- `polymorphism` - allows more flexibility and maintability
- `extensibility` - enables code to more easily scale and extend

---

# Downsides of OOP

- `learning curve` - fundamentally different paradigm than what most people learn first
- `performance and memory` - could require more resources to execute
- `longer to develop` - could take more time to set up correctly
- `not always best fit` - sometimes just isn't the best solution for the problem

---

# Revisit Example 2

- instead of having a "main" bank function or program, have a bank `object` and customer `objects`
- bank object can have many customer objects
  - possible stored in an array
- each customer object has a `private` balance variable; customers cannot see each other's balances
- banks object can "ask" each customer object to pay $100
  - it is up to each individual customer object to decide how to give that
  - eg through checking, savings, etc

---

# Classes and Objects

- a `class` is the definition of an object
  - think of it as the blueprints
- an `object` is an actual `instance` of a class
- think about the difference between blueprints for a car (class) and the actual cars themselves (object)
- creating an object from a class is called `instantiation` or `instantiating`

---

# Creating a Class

- start with `class` keyword
- define `public` and `private` `members`
  - a `member` is a variable or function tha belongs to a class
  - called `member variables` and `member functions`
  - `public` members can be access `outside` of the object
  - `private` members can only be accessed by other members of the object

---

# Accessors and Mutators

- for added security, the best practice is to create `accessors` and `mutators`
- don't allow outside code to directly access a variable
- create a function as an `accessor` to return the value
- create a function as a `mutator` to modify the value

---
  
# Instantiating a Class

- first, define the class!
- then, can use the class as if it were a data type
  - ie just the same as you would declare an `int` or `double`

---

# Accessing Public Members

- remember: an object is a collection of variables 
- you can access the `public` members from anywhere
- you have to use this syntax: `objectVariableName.publicMember`

---

# Coding Along

---

# For Next Week

- read chapter 7.5 - 7.7
- programming assignment posted tonight
- quiz next week
- review 7.1-7.4
