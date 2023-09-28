# Programming Assignment 04 Bussing

## Purpose

- To practice using constant references in C++
- To practice writing class definitions
- To practice forming and commenting reasonable assumptions for gaps in code

## Task

You are building a model of a zoo system and want to start off small. Using C++ and Object Oriented Programming principles to create the following classes:

### Animal Class
- has member variables for species of animal, gender, and age
- uses accessors (if needed) and mutators (if needed) that safeguard each of those member variables
- has a 3 parameter constructor that sets the species, gender, and age
- if invalid parameters are given, it uses the defaults instead:
  - if species is invalid, set it to tiger
  - if gender is invalid, set it to female
  - if age is invalid, set it to 1
- the only valid inputs for species are `tiger`, `lion`, `bear`, and `elephant`
- on your discretion, determine invalid values for gender and age and explain it in a comment

### Zoo Class
- has member variables for the number of `tigers`, `lions`, and `bears`
- uses accessors (if needed) and mutators (if needed) that safeguard each of those member variables
- has a public member function that returns the total number of animals
- has a default constructor that sets the value for each number of animals to 0
- has a 3 parameter constructor that sets the values of each number of animals to the given arguments
- performs validation checks on those parameters
  - if a value is passed that is too high, set it instead to the max value
  - using your discretion, determine a different max value for each species of animal and explain your reasoning in a comment
- has a public member function named addAnimal that takes a **constant reference** to an Animal object
  - if the animal's species is not one that the zoo accepts, do nothing
  - if the zoo already has too many of the given species, do nothing
    - remember the max values you determined in the constructor
  - otherwise, increase the number of animals of the appropriate species

### Demonstration

- write C++ code in the `int main` function that sufficiently demonstrates that each public member function of both classes works
- remember: this also includes demonstrating what happens when valid and invalid inputs are given, when too many animals are added, etc.

## Hint

- as is good practice, only member functions should be public in your classes
- also as is good practice, avoid using `std::cout` in the classes; instead, they should return a value to `int main` that can then be printed
- avoid using inline functions and instead define member functions outside of the classes

## Submission

Please submit a `.cpp` file on Blackboard.
