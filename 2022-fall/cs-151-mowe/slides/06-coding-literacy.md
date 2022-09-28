---
theme: default
class: invert
paginate: true
---

# 06 - Coding Literacy and Math Expressions
2022-09-28

---

# Reading Code 1/4

When learning a new language like English, Spanish, or Korean for the first time, it is equally important to learn how to both read and write it.

Coding is no different! Let's practice some *code reading*

---

# Reading Code 2/4

What will each of the following program segments print on the screen?

```
int freeze = 32, boil = 212;
freeze = 0;
boil = 100;
cout << freeze << endl << boil << endl;
```

```
int x = 0, y = 2;
x = y * 4;
cout << x << endl << y << endl;
```

```
cout << "I am the incredible";
cout << "computing\nmachine";
cout << "\nand I will\namaze\n";
cout << "you.\n";
```

---

# Reading Code 2.5/4

```
int x;
int y;

x = 9;
x = 3;
y = x;
```

- left hand side = right hand side
- if a variable is on the left hand side, its value will be overwritten
- if a variable is on the right hand side, its value will be read


---

# Reading Code 3/4

```
cout << "Be careful!\n";
cout << "This might/n be a trick ";
cout << "question.\n";
```

```
int a, x = 23;
a = x % 2;
cout << x << endl << a << endl;
```

---

# Reading Code 4/4

```
*/ What's wrong with this program? /*
#include iostream
using namespace std;

int main();
}
   int a, b, c    \\ Define 3 integers
   a = 3
   b = 4
c =a +b
   Cout >> "The value of c is " >> C;
return 0;
{
```

[fork this replit](shorturl.at/inU45)

---

# Coding Practice

Write assignment statements that perform the following operations with int variable i , double variables d1 and d2 and char variable c.

```
A. Subtract 8.5 from d2 and store the result in d1.
B. Divide d1 by 3.14 and store the result in d2.
C. Store the ASCII code for the character 'F' in c.
D. Add 1 to i and store the new value back in i.
E. Add d1 to the current value of d2 and store the result back in d2 as its new value.
```

---

# Quick Note

If you are using a pdf version of the textbook, be aware that some tables may be missing.

---

# Operator Precedence 1/2

Just like in math, `operators` in computer science follow `precedence` or `order of operations`. It is much the same as it is in math: PEMDAS

```
double price = 25.50;
double tax = 0.08;
double final_bill = price + price * tax;
```

---

# Operator Precedence 2/2

However, good coding habits should be to make your code clear and explicit. In the case of mathematical expressions, we can use `()` to make our code crystal clear.

```
double price = 25.50;
double tax = 0.08;
double final_bill = price + (price * tax);
```

---

# The `cmath` Library

- There are many common math functions that aren't included in standard C++ and so we need `include` a `library`
- Including libraries helps us extend the abilities of our code without having to write much more code ourselves
- Let's take an example with exponents:

```
#include <cmath> // for pow
// pow is the power function
// it raises the first argument to the power of the second argument

int main(){
  double radius = 4;
  double pi = 314159;
  double area = pi * pow(radius, 2);
  return 0;
}
```

---

# Using `cmath`

`Challenge` how can we write a program that calculates the Pythagorean Theorem?

---

# Constants 1/2

- There will be times when we want to use a `literal` value
- This is like a variable but it will never change
- It's possible to write code like this:

```
double m;
cin >> m;
double f = m * 3.28084;
```

- However, it's not clear what `3.28084` represents!

---

# Constants 2/2

- We can use `constants` (your textbook calls them `named constants`) to bring more clarity
- We will still use a `variable` but make sure that it never changes value
- We use the `const` keyword before it and, by custom, make it in all caps
- Often, constants will be declared and assigned at the `top` of the file

```
const double METERS_TO_FEET = 3.28084;

double m;
cin >> m;
double f = m * METERS_TO_FEET;
```

---

# Coding Lab

---

# Homework Lab
