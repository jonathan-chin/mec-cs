---
theme: default
paginate: true
---

# 06 - Object Member Functions, Constructors, and Destructors
2023-09-19

---

# Review
## What is 1 thing you remember from last week?

---

# Clarification on this

- `this` keyword exists within objects to refer to itself
- a way to access its members
- tied to `variable scope`
- optional in `C++` but required in other languages
- consensus in `C++` is to only use it when needed

---

# Member Function Definitions

- can be fully declared within the class definition
  - called `inline function`
- for longer function definitions, place the `prototype` within class definition and define function outside
- syntax for defining a member function outside of a class is: `returnType ClassName::functionName(/* args */){/*body*/}`

---

# Member Function Definitions Example

```
class City {
	public:
		double shortFunction(/* args */){
			//body
		}
		double longFunction(/* arg types */);
}

double City::longFunction(/* args */){
	// body
}
```

---

# Inline Functions Overhead

- `inline functions` treated special by compiler
- normal functions are created once in memory and referred to whenever called
- `inline functions` are replicated by compiler each time they are called
  - called `inline expansion`
- can require more resources and impact efficiency of code
- depending on the context, we might care about this

---

# Constructors

- a `constructor` is a special member function that is called automatically when an object is instantiated
- must be a public member function with the **exact** same name as the class
- may define multiple constructors using `function overloading`
- can be used to provide security on private member variables

---

# Function Overloading

- can create 2 functions with the same name but different `signatures`
- provides a convenient and intuitive way to call functions

---

# Default Constructors

- a `constructor` without any arguments is called a `default constructor`
- a `default constructor` is automatically created if **no** constructors are defined
- however, it is not automatically created if at least 1 constructor is defined
- good practice to include a default constructor

---

# Destructors

- special function called when an object is `destroyed`
- either when program / function finishes executing or when explicitly deleted
- can be used for `cleanup` logic, eg to free up dynamically allocated memory or external database connection

---

# For Next Week

- read chapter 7.8 - 7.11, 7.14 - 7.15
- programming assignment posted tonight
- quiz next week
- review 7.1-7.7
