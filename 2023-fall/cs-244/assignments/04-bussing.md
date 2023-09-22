# Programming Assignment 04 Bussing

## Purpose

To practice designing and creating classes in C++

## Task

You've been asked to design a bus route simulator for the MTA. They want to know how traffic will flow at a particular bus stop. Create a Bus class that:

- has a constructor that accepts a string, representing its route number. route numbers should roughly match real world NYC route numbers, like M72, Q32, and B31
- has a default constructor that sets its route number to "Not in Service"
- tracks how many passengers are on the bus, starting with 0
- protects its route number from change and only sets it on instantiation
- protects its number of passengers
- has a boardPassenger member function that takes a Passenger object (explained below). if the passenger's route number matches its route number, it should increment its passenger count. otherwise, do nothing.

Also create a Passenger class that:

- has a constructor that accepts a string, repesenting the route number that the passenger needs to get on
- has no default constructor; in this context, it does not make sense to have someone at a bus stop who is not waiting for a bus
- tracks whether it is 'waiting' or 'on bus'
- protects its route number from change and only sets it on instantiation
- protects its boarding status
- has a boardBus member function that takes a Bus object. if the passenger's route number matchesthe bus's route number, it will set its own boarding status to 'on bus'

Finally, write code in `int main` to demonstrate that the classes work.

- create 3 Bus objects, with different route numbers, including one that is out of service
- create 10 Passenger objects with different route numbers. don't distribute them evenly among the existing buses
- for each Bus object, try to board each passenger. the Bus object's passenger count should increase.
- for each Passenger object, try to board onto each bus. the Passenger object's boarding status should change.
- finally, print out each Bus object's route and passenger count.

## Hint

The numbers here are low enough that if you wanted to, you could hardcode all fo the interactions. However, try to use `for` loops and `arrays` to instantiate the objects and to have them interact.

As we move along in the semester, we'll be using those instead of hardcoding.

## SUBMISSION

Please submit a `.cpp` file on Blackboard.
