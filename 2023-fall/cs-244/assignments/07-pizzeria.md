# Programming Assignment 07 Pizzeria

## Purpose

- To practice writing C++ programs that implement OOP with several files
- To practice creating user interfaces in C++

## Task

You are asked to create a pizzeria simulator. The pizzeria has one very long oven that can fit up to 10 pizzas, but they can only be accessed in a First In Last Out (FILO) manner. Here are the program requirements:

### Oven Class
- create an `oven.h` file containing all the prototypes and definitions for an Oven class
- implement the `#ifndenf`, `#define`, and `#endif` directives to prevent double definition errors
- create a `oven.cpp` file that implements everything defined in the `oven.h` file
- allow the oven to hold up to 10 pizzas in an array
  - track the number of pizzas using a `size` private member variable, similar to the one in the `Number Game` example
- implement an `addPizza` public member function that takes one string argument called `toppings`
  - it should instantiate a new Pizza object with the `toppings`
  - it should add that Pizza object to the next available spot in the array if there is space
  - `addPizza` should return a boolean that represents whether a new pizza was successfully added to the oven
  - if there are already 10 pizzas in the oven, it should return false; otherwise return true
  - if successful, the `size` member variable should be increased by 1
- implement a `getPizza` public member function that returns a Pizza object
  - it should return the most recent pizza that was inserted
  - the `size` variable should be updated to indicate there is 1 fewer pizza
  - you can assume that this function never gets called if there are 0 pizzas in the oven
- implement a `cook` public member function that calls the `cook` public member function of each pizza that is in the oven
- implement a `print` public member function that calls the `print` public member function of each pizza that is in the oven

### Pizza Class
- create an `pizza.h` file containing all the prototypes and definitions for a Pizza class
- implement the `#ifndenf`, `#define`, and `#endif` directives to prevent double definition errors
- create a `pizza.cpp` file that implements everything defined in the `pizza.h` file
- allow the pizza to track its `toppings`, `status`, and `minutesCooking`
- `toppings` should be a string that is set on instantiation and never be publicly changed
- `minutesCooking` should be an integer that starts at 0; it is only ever used by other member functions in the class and never directly accessed or mutated
- `status` should be a string that starts at `raw` and changes to `ready` and finally `burnt` depending on `minutesCooking`; it is only ever used by other member functions in the class and never directly accessed or mutated
- implement a `cook` public member function that increases the `minutesCooking` by 1
  - if `minutesCooking` is less than 5, the `status` should be `raw`
  - if `minutesCooking` is between 5 and 10, the `status` should be `ready`
  - if `minutesCooking` is greater than 10, the `status` should be `burnt`
- implement a `print` function that prints the pizza's `toppings`, `status`, and `minutesCooking`
- **note**: since this class implements a constructor with arguments, you are likely going to need to also specify a default constructor

### main.cpp
- create a `main.cpp` file that implements a text driven interface for the classes
- it should instantiate one `Oven` object
- it should ask the user to type in any of the following commands:
  - `add` will then prompt the user for `toppings`; once entered, it will call the oven's `addPizza` member function with the `toppings`
    - if `addPizza` returns `false`, print out a message indicating the oven is full
  - `print` will call the oven's `print` member function
  - `get` will call the oven's `getPizza` member function
  - `cook` will call the oven's `cook` member function
  - `quit` will exit the program
- the `main.cpp` file should continuously ask the user for commands until `quit` is typed in
- you can assume that the user never makes a typo and never types anything except for the commands listed

## Expected Output

```
Welcome to the pizzeria simulator
Enter a command: add
Which toppings? cheese
Enter a command: cook
Enter a command: cook
Enter a command: add
Which toppings? pepperoni
Enter a command: cook
Enter a command: get
pepperoni raw 1
Enter a command: cook
Enter a command: add
Which toppings? mushrooms
Enter a command: cook
Enter a command: cook
Enter a command: print
cheese ready 6
mushrooms raw 2
Enter a command: cook
Enter a command: cook
Enter a command: cook
Enter a command: cook
Enter a command: cook
Enter a command: print
cheese burnt 11
mushrooms ready 7
Enter a command: get
mushrooms ready 7
Enter a command: cook
Enter a command: cook
Enter a command: get
cheese burnt 13
Enter a command: quit
```
