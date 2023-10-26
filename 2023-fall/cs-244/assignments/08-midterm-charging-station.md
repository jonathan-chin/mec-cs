# Midterm Charging Station

## Purpose

- To demonstrate mastery of writing C++ programs that implement OOP with several files
- To demonstrate mastery of creating user interfaces in C++

## Task

You are asked to create a phone charging station simulator. The charging station, however, is not designed very well. The phones can only be accessed in a First In Last Out (FILO) manner so that you can only remove the most recent phone that was inserted. Also, the charging station sometimes doesn't always work! Here are the program requirements

### Station Class
- create an `Station.h` file containing all the prototypes and definitions for an Station class
- implement the `#ifndenf`, `#define`, and `#endif` directives to prevent double definition errors
- create a `Station.cpp` file that implements everything defined in the `Station.h` file
- allow the station to hold up to 5 phones in an array
  - track the number of phones using a `size` private member variable, similar to the one in the `Number Game` example
- implement an `addPhone` public member that takes one integer argument called `battery`
  - this represents what the phone's battery level is when it is first inserted
  - it should instantiate a new Phone object with that `battery`
  - it should add the Phone object to the next available spot in the array if there is space
  - it should return a boolean that represents whether a new phone was successfully added or not
  - if there are already 5 phones in the oven, it should return false; otherwise return true
  - if successful, the `size` member variable should be increased by 1
- implement a `getPhone` public member function that returns a Phone object
  - it should return the most recent phone that was inserted
  - the `size` variable should be updated to indicate there is 1 fewer phone
  - you can assume this function never gets called if there are 0 phones in the station
- implement a `charge` public member function that calls the `charge` public member function of each phone that is in the charger
- implement a `drain` public member function that calls the `drain` public member function of each phone that is in the charger
- implement a `print` public member function that calls the `print` public member function of each phone that is in the station

### Phone Class
- create an `Phone.h` file containing all the prototypes and definitions for a Phone class
- implement the `#ifndenf`, `#define`, and `#endif` directives to prevent double definition errors
- create a `Phone.cpp` file that implements everything defined in the `Phone.h` file
- allow the phone to track its `battery` and `status`
- `battery` should be an integer that is limited between 0 and 100
  - it should be set on instantiation and never directly accessed after
- `status` should be a string that changes depending on `battery`
  - if `battery` is less than or equal to 20, `status` should be `red`
  - if `battery` is greater than 20 but below 80, `status` should be `yellow`
  - if `battery` is greater than or equal to 80, `status` should be `green`
- implement a `charge` function that increases `battery` by 5
  - if `battery` would go over 100, keep it at 100
- implement a `drain` function that decreases `battery` by 5
  - if `battery` would go below 0, keep it at 0
- implement a `print` function that prints the phone's `battery` and `status`
- **note**: since this class implements a constructor with arguments, you are likely going to need to also specify a default constructor

### main.cpp
- create a `main.cpp` file that implements a text driven interface for the classes
- it should instantiate one `Station` object
- it should ask the user to type in any of the following commands:
  - `add` will then prompt the user for `battery`; once entered, it will call the station's `addPhone` member function with the `battery`
    - if `addPhone` returns `false`, print out a message indicating the station is full	
  - `print` will call the station's `print` member function
  - `get` will call the station's `getPhone` member function
  - `charge` will call the station's `charge` member function
  - `drain` will call the station's `drain` member function
  - `quit` will exit the program
- the `main.cpp` file should continuously ask the user for commands until `quit` is typed in
- you can assume that the user never makes a typo and never types anything except for the commands listed

## Example Output

```
Welcome to the charging station simulator
Enter a command: add
What battery level? 10
Enter a command: add
What battery level? 30
Enter a command: add
What battery level? 90
Enter a command: print
10 red
30 yellow
90 green
Enter a command: charge
Enter a command: charge
Enter a command: charge
Enter a command: print
25 yellow
45 yellow
100 green
Enter a command: get
Enter a command: drain
Enter a command: drain
Enter a command: drain
Enter a command: drain
Enter a command: drain
Enter a command: drain
Enter a command: print
0 red
20 red
Enter a command: quit
Thanks!
```

