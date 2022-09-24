---
theme: default
paginate: true
---

# 05 - Good Coding Habits and Functions
2022-09-24

---

# First a Quick Note on Plagiarism

Be aware that this class abides by Medgar Evers College's policies on plagiarism.

Plagiarism is taking work and intellectual property from someone else and presenting it as your own without proper citation.

---

# Using Other Resources

- Can I use other resources like websites, videos, and textbooks to as supplements to learn from? `yes`
  - A link to the W3 Schools website is posted on Blackboard. It has in-depth tutorials, including ones on C++
- Can I go to tutoring and get help with my assignments? `yes`
- Can I ask questions about the homework during class? `yes`
- Can I rephrase a statement from another resource using my own words? `yes`

---

# Really, Why Does This Matter?

- CS 151 is a foundational class that the rest of the CS curriculum builds upon
- Without functional mastery of key concepts, future classes will be impossible
  - Plagiarism does not sufficiently prove you have functional mastery
- In industry, it's easy to tell when ideas and code are being plagiarized

---

# Comments 1/4

We've seen the syntax of comments:

```
// this is a single line comment

/*
this is a multiline comment
it can cover many things
*/
```

---

# Comments 2/4

- Writing good comments, coupled with good variable names (we'll get to that next)
- Comments are like using highlighters and post it notes when you read through a physical textbook
  - Helps improve comprehension and retention of information
  - Highlights key questions that you can go back and ask about

---

# Comments 3/4

```
/*
this is an example of well commented code
this program will ask the user about their salary
and print out the expected size of each paycheck
*/

#include <iostream> // for cin/cout
using namespace std;

int main(){

	// get user's salary
	int salary; // assume no cents
	cout >> "What is your annual salary? ";
	cin << salary;

	// set up some numbers fo calculation
	int weeks_in_year = 52;
	int pay_periods = weeks_in_year / 2; // most pay periods are every 2 weeks
	// rule of thumb: 20% of your paycheck is given to all taxes
	double tax_percentage = 0.2; 
	
	// use doubles here to keep highest precision
	double gross_per_paycheck = salary / pay_periods;
	// multiply by 1 - tax_percentage to show how much you keep
	double net_per_paycheck = gross_per_paycheck * (1 - tax_percentage);
	
	cout << "You can expect to keep $"
	<< net_per_paycheck
	<< " each paycheck\n"; // end with \n for neatness

	return 0; // no error is thrown
}
```
---

# Comments 4/4

- At this stage of your career, it is better to write MORE comments than FEWER comments.
- Even if it seems obvious, consider commenting it!
- Different people have different philosophies about when and how much to comment. You will develop your own over time!

---

# Variable Names

- Just like comments, everyone / every language has their own philosophies (or even rules!) on variable names
- Universally accepted that variables names should be descriptive. Which of the following do you think is the most descriptive variable name?
  a. `int days_in_february;`
  b. `int d;`
  c. `int feb_days;`
- I have my own style and it's what you'll be exposed to most often
- You are welcome to use / develop your own style. Just be sure to `stay consistent`

---

# Common variable name formats

```
int days_in_february;
int daysInFebruary;
int DaysInFebruary;
```

---

# Logic Error vs Runtime Error

We might not have enough time to go over this today :(

---

# Functions 1/4

- Jumping ahead a little in the textbook but that's ok
- Functions are programs within programs
- Functions take `input`, do `processing` or `manipulation`, and gives back `output`

---

# Functions 2/4

Here is the `syntax` of a function:

```
return_type function_name(input_type_1 input_name_1, ..., input_type_2 input_name_2){
	// processing goes here
	return variable;
}

return_type = datatype of what this function should output
function_name = like a variable name but for this function

input_type_1 = datatype for first input
input_name_1 = variable name for first input
NOTE: a function can take 0 to almost unlimited number of inputs
NOTE: the ORDER of inputs MATTERS
return = what value this function will output
```

---

# Functions 3/4

A function can be `called` within a program with the following syntax:

```
function_name(input_value_1, ..., input_value_n);
```

Usually, you will want to store a function's `output` or `return` into a variable.

```
bool is_prime_number = check_if_prime_number(123);
```

---

# Functions 4/4

```
// this is an example of defining and using a function

// this function takes two integers and returns the greatest of them
int get_greater_of_two(int first_number, int second_number){
	if(first_number > second_number){
		return first_number;
	}else{
		// if first_number is same as second_number, it doesn't matter which we return
		// so return second_number
		return second_number;
	}
}

int main(){ // first function to run
	int greatest_number = get_greater_of_two(456, 789);
	cout >> greatest_number;
	return 0; // main() should always return 0 if no error
}
```


---

# Review of Programming Assignment Problem

The last question of your programming assignment was a little tricky.

Let's examine it more closely.

---

# Announcements

- Checkpoint Assignment 03 is due 2022-10-01
- Programming Assignment 03 is due 2022-10-01
