---
theme: default
paginate: true
---

# 05 - Good Coding Habits and Common Error Types
2023-02-08

---

# Review
## What is 1 thing you remember from our last class?

- exercises
- different kinds of datatypes
  - int, float, double
  - `double` is used with decimals (uses more memory)
  - `int` is for whole numbers
  - `float` is used with decimals (uses less memory)
- using IDE
  - `tooltip` - hover over and shows you snippet of the API
  - `compile error` - tells you file, line number, column number, what the error is, sometimes how to fix it
  - `syntax highlighting` - IDE will use different colors to indicate different parts of code
  - `autocompletion` - guessing / giving what you probably need






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

- writing good comments, coupled with good variable names are `soft skills` that are highly valued
- comments are like using highlighters and post it notes when you read through a physical textbook
  - helps improve comprehension and retention of information
  - highlights key questions that you can go back and ask about
  - often, we leave `// TODO` notes for the future

---

# Comments 3/4

```
/*
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

- at this stage of your career, it is better to write MORE comments than FEWER comments.
- even if it seems obvious, consider commenting it!
- different people have different philosophies about when and how much to comment; you will develop your own over time

---

# Variable Names

- just like comments, everyone / every language has their own philosophies (or even rules!) on variable names
- it is universally accepted that variables names should be descriptive
- which of the following do you think is the most descriptive variable name?
  a. `int days_in_february;`
  b. `int d;`
  c. `int feb_days;`
- I have my own style and it's what you'll be exposed to most often

---

# Common variable name formats

```
int days_in_february; // snake case
int daysInFebruary;   // camel case
int DaysInFebruary;   // capital case
int DAYS_IN_FEBRUARY; // upper case

// less common formats
int days-in-february; // kebab case
int daysinfebruary;   // flat or mumble case
```

---

# Error Types

- computers are only as smart as their source code
- will only do what you code it to do (but will do it quickly and accurately)
- different types of errors require different fixes / approaches

---

# Compile Error 1/2

- source code violates some rule about the language
- compiler will fail and the code will `not` run
- analogy example: what is wrong with this recipe ingredient list?

```
3 xz flour
1 rm baking soda
1 3/4 jy baking powder
```

---

# Compile Error 2/2

- easiest error type to find and fix
- compiler will not allow you to continue
- compiler will print out error messages that are descriptive

---

# Logic Error 1/3

- source code is fine
- when running, the program does not do what is intended (wrong answer, sends too much / too little information, etc)
- analogy example: what is wrong with this recipe ingredient list?

```
4 tbsp peanut butter
2 cups cold tea
7 tbsp salt
2 oz hot sauce
```

---

# Logic Error 2/3

- hardest error to `find` but can be easy to fix
- must try code with a wide variety of inputs and manually check the outputs
- sometimes also requires a program trace
- importance of [PRIMM CS educational model](https://www.futurelearn.com/info/courses/secondary-programming-pedagogy/0/steps/68416)
- tldr; `P`redict what the output should be before you run code

---

# Logic Error 3/3

- start by using `easy` numbers for testing!
- what is the difference between the following test inputs?

```
Welcome to the tip calculator!
Enter the bill amount and I will tell you how much a 20% tip is

Bill: 100
Tip should be 20

Bill: 373.26
Tip should be 74.652
```

---

# Runtime Error 1/3

- source code is fine
- logic is `mostly` fine
- program runs as intended for almost all inputs
- however, a certain set of inputs or circumstances produces an error
- analogy example: what could be wrong with this recipe ingredients list?

```
2-3 medium ripe bananas
1/3 cup butter
1/2 tsp baking soda
3/4 cup sugar
1 1/2 cups all purpose flour
```

---

# Runtime Error 2/3

- consider the following program; what could go wrong?

```
int dividend;
int divisor;
double quotient;

std::cout << "What is the dividend?";
std::cin >> dividend;

std::cout << "What is the divisor?";
std::cin >> divisor;

quotient = dividend / divisor;
std::cout << "The quotient is " << quotient;
```

---

# Runtime Error 3/3

- very hard to find but a little easier
- there are common pitfalls that cause runtime errors
- as you get more experience, you can predict runtime errors
- sometimes though, you will get a curveball
- still need to test on a variety of inputs and environments

---

# Summary

- `P`redict output!
- run your source code early to catch compile errors
- test your code with a variety of inputs to catch logic and runtime errors
- as we learn more coding features and patterns, I will point out common runtime errors
