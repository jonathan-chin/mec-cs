# Programming Assignment 06 Vending Machine

## Purpose

- To practice writing C++ programs that implement OOP with several files
- To practice creating user interfaces in C++

## Task

You just entered the vending machine business and want to build a simulation to better understand vending machine logistics. Here are the program requirements:

### Vending Machine

- create a `vending_machine.h` file containing all the prototypes and definitions for a Vending Machine class
- implement the `#ifndenf`, `#define`, and `#endif` directives to prevent double definition errors
- create a `vending_machine.cpp` file that implements everything defined in the `vending_machine.h` file
- allow the vending machine to track the quantities and prices of 4 different products: `A`, `B`, `C`, and `D`
- create a default constructor that sets the starting quantities for each product to 0 and their prices to $1 each
- create another constructor that accepts starting quantities and prices as arguments for all 4 products
- restrict product quantities to be at most 3; there should be validation in the constructor to check against this and have a reasonable response
- allow the vending machine to track how much money it has stored, always starting with $0
- prevent the quantities, prices, and money stored from being changed outside of the class
- allow the quantities, prices, and money stored  to be publicly visible
- create a vendProduct member function that accepts the product a customer wants and how much money the customer has entered
  - if the money entered is lower than the price of the product, return false
  - if the money entered is higher than the price of the product but there is not enough money in the vending machine to give change, return false
  - if the quantity of the product is 0, return false
  - if the money entered is equal to the price or if it is higher and there's enough money to give change, update the quantity for the chosen product and the money stored in the vending machine, and finally return true
  - you can assume that:
    - the user input is always perfect, ie the user will never ask for product Z
    - all prices and amounts of money given are whole numbers
    - the vending machine always dispenses exactly 1 product for each transaction
    - the user will never enter 0 or a negative number for amount of money

### Main

- create a `main.cpp` file that includes the `vending_machine.h` file
- instantiate the Vending Machine class once, setting each price to different amounts and the quantities to max
- print out the product prices for the user to see
- create a simple user interface that asks for a product letter that the user wants to buy
  - if it is `Q`, print out the remaining quantities of each product and the total money stored in the vending machine, then exit the program
  - if it is `A`, `B`, `C`, or `D`, ask the user for how much money they are entering, and then call the vendProduct member function with the appropriate inputs
  - print out an appropriate message based on the return value of vendProduct (ie `true` or `false`)
  - continue prompting the user until they enter `Q`

## Hint

You can review the existing example code for the [Deck of Cards](https://github.com/jonathan-chin/mec-cs/tree/main/2023-fall/cs-244/examples/deck_of_cards) classes. This demonstrates how to separate code out into `.h`, `.cpp` and `main.cpp` files.

## Submission

Please submit all files on Blackboard.
