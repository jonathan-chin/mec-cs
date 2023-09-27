---
theme: default
paginate: true
---

# 09 - Passing Objects
2023-09-26

---

# Review
## What is 1 thing you remember from last week?

- over commenting
  - only commenting when something is confusing or difficult
  - for functions, give a general overview
  - comments don't need perfect grammar
  - remember that variable and function names, as well as whitespace, do a lot of commenting already
- default constructors (automatically called)
- a constructor is a function that allocates and potentially initializes data for an instance of the class
- destructors - a function that is called when an object is destroyed / out of scope, etc
  - can free up memory or other cleanup logic

---

# Arguments in Functions

- by default, variables passed as arguments are `passed by value`
- C++ will make a copy of that variable including its value
- within the function, any changes to the argument will not affect original variable

---

# Pass by Value Example

```
void triple(int number){
	number *= 3; // logic error; will not modify number since it is a copy
}

int main(){
	int argument = 123;
	triple(argument);
	std::cout << argument; // still has value 123
}
```

---

# Pass by Reference

- arguments can also be `passed by reference`
- instead of making a copy, C++ will pass the `memory address`
- changes to the reference will change the value at that memory address (ie the original variable)
- more efficient because no or very little additional memory is used; useful if you are passing objects with a lot of members
- achieved by placing `&` (known as the reference object) in front of argument name

---

# Pass by Reference Example

```
void quadruple(int &number){
	number *= 4;
	// works as intended because arg is passed by reference
}

int main(){
	int argument = 123;
	quadruple(argument);
	std::cout << argument;
}
```

---

# Pause for Questions
## another example posted to GitHub

---

# Pass by Constant Reference

- it can be more efficient to pass objects by reference
- however, this can be a huge security flaw
- can use `const` keyword to indicate variable cannot be modified
- best of both worlds: efficiency and security
- *note*: function can only call accessor members that are also `const`

---

# Pass by Constant Reference Example

```
class Bus{
	private: std::string route;
	public: std::string getRoute() const; // defined elsewhere
}

class Passenger{
	public: void boardBus(const Bus &b){
		// can access b.getRoute();
	}
}

```

---

# Object Composition

- objects inside objects (inside objects inside objects)
- able to reuse `encapsulated` code
- part of OOP `extensibility`
- imagine the Bus and Passenger classes; a bus can have passengers without having to care about exact implemenation (this is `abstraction`
- a BusStation class can have multiple buses (which have multiple passengers)
- a Transit system can have multiple BusStations, as well as TrainStations, etc.
- OOP `shines` in this kind of organization

---

# Multiple Files

- our software needs are starting to get complex
- easier to maintain if in multiple files
- for example: Bus.cpp, Passenger.cpp, etc
- also easier if multiple developers
- however, some classes might use other classes (Bus needs Passenger)
- the solution: `header files`

---

# Header Files

- only function prototypes
- ends on `.h`
- can be included instead of including full file
  - for example: Bus.cpp would include Passenger.h
- `linker` handles wrapping together multiple files
- resembles an API or instruction manual

---

# Include Guards

- multiple files might include the same header file
- for example, Bus.cpp and Train.cpp might include Passenger.h
- to avoid duplication of code, can use `include guards`
```
#ifndef PASSENGER_H
#def PASSENGER_H
```

---

# Pause for Questions
## more on header files later in semester

---

# Coding Lab
## let's revisit the Date object problem from Thursday

---

# Self Promotion

- coding streams on [twitch.tv/sharemeals](https://twitch.tv/sharemeals)

---

# For Next Week

- review 7.1-7.11, 7.14-7.15
- review slides!
- programming assignment due next week
- quiz next week
