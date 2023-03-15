---

theme: default
class: invert
paginate: true

---

# 08 - Working with Strings
2023-03-01

---

# Number systems

- a number system refers to how many symbols are used to represent a particular value
- decimal system or base 10 system is what we use
  - 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
- other system exist, like hexadecimal (base 16)
  - 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F
  - 11 in base 10 is B in base 16
  - base 16 is base 2^4
- binary is a base 2 system
  - 0, 1
  - computers store numbers as high electricity or low electricity (on / off)

---

# Scientific Notation                                                                 
                                                                                      
- in some science fields, we deal with very large or very small numbers               
- for example, speed of light in mm is 299792458000                                   
- scientific notation is a way to highlight the most important factors of a number    
- we care about 2 things:                                                             
  - power of 10                                                                       
  - what is the leading digit                                                         
- 299792458000 in scientific notation is 2.9 x 10^11                                  
- in CS, we use e notation instead: 2.9e11

---

# Named Constants

- constants are variables whose value is assigned only once and can never change
- use `const` before variable declaration and assignment
- convention is to put variable name in ALL_CAPS
- useful to ensure protect against errors
- improves maintainability; easier to change often used values
- useful to improve code readability
```
double meter = 3.5;
double feet_no_const = meter * 3.28084;
// or
const double METER_TO_FEET = 3.28084;
double feet_with_const = meter * METER_TO_FEET;
```

---

# Formatting Output

- remember: there are 3 major responsibilities of a computer program: `input`, `processing`, and `output`
- `output` could mean several things: for another program, for an electronic device, or for a person
- when giving output to a person, formatting is incredibly important
- make it easy to read and understand
- often referred to as `pretty print`
- need to use `<iomanip>` library

---

# setw 1/2

- when outputting a variable, it is sometimes useful to insert extra spaces if needed
- for example, when printing out values in a table
- `std::setw()` can be called right before outputting a variable
- the number inside `std::setw()` will specify the minimum length of characters to be printed
- if the variable takes fewer characters, spaces will be printed to the left

---

# setw 2/2

```
int students_in_cs_151 = 8;
int students_in_cs_281 = 304;

std::cout
  << students_in_cs_151 << "\n"
  << students_in_cs_181 << "\n";

// vs

std::cout
  << std::setw(3) << students_in_cs_151 << "\n"
  << std::setw(3) << students_in_cs_181 << "\n";
```

---

# left and right

- `std::setw()` normally **left pads** or **right justifies** your variable
- it will add extra spaces on the left side
- to change that behavior, you can use `std::left` to **right pad**
- once set, it will affect all the following `std::cout`; you can use `std::right` to change behavior

---

# setprecision

- when working with decimals, C++ will output at most 6 decimal points by default
- sometimes, you want more control
- `std::setprecision()` will let you control the **max** number of decimal points to print
- if a number has fewer, nothing changes

---

# fixed

- will force the program to print the exact number of decimal points
- any more than what is specified by `std::setprecision()` will be lost
- any fewer will be `padded` with 0s

```
double price = 10.5;
std::cout
  << std::setprecision(2)
  << std::fixed
  << price;
```

---

# showpoint

- by default, decimal bearing data types (`double` and `float`) will not print decimal values if it is a whole number
- you can force the program to print the decimal point with `std::showpoint`

```
double price = 30;
std::cout
  << std::setprecision(2)
  << std::showpoint
  << std::fixed
  << price;

```

---

# Pause for Questions

---

# Inputting Strings

- `std::cin` has a very particular behavior
- it will stop reading input when **enter** is pressed
- it will also break up input on spaces and treat them as multiple inputs

```
std::string first_name;
std::string middle_name;
std::string last_name;

std::cin
  << first_name
  << middle_name
  << last_name;
// will work if user presses enter between each
// will also work if user enters one long string with spaces
// and presses enter once
```

---

# Inputting Strings

- `std::cin` will **not** allow you to get any strings with spaces
- instead, use `std::getline()`
```
std::string full_name;

// will not work as intended
std::cin
  << full_name;

// will work as intended
std::getline(std::cin, full_name);
```

---

# Inputting Chars

- `std::cin` will skip over whitespace (including spaces)
- this means that it is impossible to store a whitespace character
- also, impossible to require user to press enter by itself
- in this case, use `std::cin.get()` instead

---

# Program Tracing

- incredibly important to understand how a computer works
- used to uncover `logic` and `runtime errors`
- there's a small section in your textbook; be sure to read it!
- program tracing has already proven useful
