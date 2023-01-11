---
theme: default
paginate: true
---

# 13 - Functions
2022-11-07

---

# Functions Review 1/3

- `What` are functions?
- `Why` do we use them?
- `How` do we write them?

---

# Functions Review 2/3

- `What` is a function call?
- `How` do we write them?

---

# Functions Review 3/3

- `What` is a function prototype?
- `Why` do we need them?
- `How` do you write it?

---

# Coding Lab

---

# return keyword

- most functions have a specific task
- they can pass values to their `calling` function by using the `return` keyword
- the `data type` of anything returned *must* match the `return data type` in the function definition
- `return` immediately exits the function and can be used to bypass code
- `void` functions can just call `return;` by itself, with no value

---

# return example

```
#include <math.h>

double third_side_of_triangle(double, double);

double third_side_of_triangle(double a, double b){
	// assume triangle is right triangle
	// assume a and b are shortest sides
	double c_squared = pow(a, 2) + pow(b, 2);
	return sqrt(c_squared); // assume only taking positive sqrt
}
```

---

# Variable Scope, local and global variables

- the variables we've been declaring so far have all been `local` variables
- `local` variables only have meaning within the function they are defined in
- `global` variables can be used to share information among *all* functions
- must be defined outside of *all* functions, even int main()
- `NOTE` that `global` variables can be dangerous and must be used sparingly

---

# Global Variable Example

```
const string FIRST_NAME = "Medgar";
const string LAST_NAME = "Evers";
const string TITLE = "Mr.";

string get_full_name(){
	return FIRST_NAME + " " + LAST_NAME;
}

string get_title_name(){
	return TITLE + " " + LAST_NAME;
}
```

---

# Global Variable Warnings

- Your textbook has some good reasons on why to avoid / limit globals
- If you do have to use globals, they generally should be constants. Otherwise, your program might run inconsistently.

---

# Default Arguments 1/3

- Sometimes, you want to have some flexibility in your functions
- They can be run some, all, or none of their inputs
- To do this, provide a value in the function definition or prototype

---

# Default Arguments 2/3

```
double get_paycheck(double payrate, int hours = 40){
	return payrate * hours;
}

double full_time_employee_pay = get_paycheck(35);
double part_time_employee_pay = get_paycheck(35, 20);
```

---

# Default Arguments 3/3

- You can force a function to use a default value by omitting the value in the function call
- This can only happen with arguments at the *end* of the list

```
// this code is invalid
double get_paycheck_invalid(int hours = 40, double payrate){
	return hours * payrate;
}

double full_time_employee_pay = get_paycheck_invalid(, 35);
```

---

# Advanced Topics

- Your textbook mentions some concepts that are too advanced
- At this stage, the kinds of coding that you will be doing will not need them so please skip them.
- Later on in your career, you might need these topics

1. Static Local Variables
2. Reference Variables
3. Overloading Functions
4. exit()
5. Stubs and Drivers

---

# Coding Lab
