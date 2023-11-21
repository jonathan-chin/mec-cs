---
theme: default
paginate: true
---

# 16 - Copy Constructor and Overloaded Operators
2023-11-21

---

# Review
## What is 1 thing you remember from last week?

---

# Polymorphism

- pillar concept in `OOP`
- we haven't seen too much of it so far, just `overloaded` constructors
  - `overloaded` means any functions / operators that share the same name but different parameters / operands (and different implementations)
- let's learn some other examples of `polymorphism`

---

# Copy Constructor

- when initializing an object, can set it equal to another existing object
- this is `copying`

```
Train ATrain("A", "express", "morning");
Train CTrain = ATrain; // copying happens here
CTrain.setName("C");
```

---

# Default Copy Constructor

- like the default constructor, all objects have a default `copy constructor`
- will copy over all of the values of member variables
- sometimes, that's not enough or will produce the wrong thing
- our textbook has an example with pointers
- another use case: if there are external dependencies, such as connecting with a database

---

# Copy Constructor Syntax

- same syntax as `overloaded constructor`
- except parameter list is only `const className &`

```
// Train.h

class Train{
  public:
    Train(); // default constructor
    Train(std::string name); // overloaded constructor
	Train(const Train &); // copy constructor
}

```

---

# Overloaded Operators 1/3

- an `operator` is symbol that represents some transformation of data
- common operators are `+ - / * < <= == => >`
- can `overload` these operators to make sense for our classes
- can be defined just like a member function
- just need to name function with `operator` before the symbol

---

# Overloaded Operators 2/3

```
// Train.h
class Train{
  public:
    boolean operator>(const Train &);
}

// Train.cpp

bool Train::operator>(const Train compareTrain &){
  if(schedule == "express"
    && compareTrain.getSchedule() == "local"){
    return true;
  }else{
   return false;
  }
}

```

---

# Overloaded Operators 3/3

- technically, this is just one approach
- there is another approach detailed in textbook
- requires understanding what `friend` functions are

---

# Pause for Questions

---

# Coding Lab
## Review Updates to Deck of Cards

---

# Rest of Semester overview

- War assignment
- Midterm Revision
- Blackjack project
- Career Readiness assignment
