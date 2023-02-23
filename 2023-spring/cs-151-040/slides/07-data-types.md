---

theme: default
class: invert
paginate: true

---

# 04 - DataTypes
2023-02-22

---

# Data Types 1/2

- the entire purpose of computer programs is to manipulate data
- however, there are several different `kinds of data` that only make sense to manipulate in certain ways
- consider these questions:
  - what is your first name?
  - what is your first name in all capitals?
  - what is your age?
  - is your age even or odd?
  - what are your top 3 favorite movies?
  - what are your top 3 favorite movies in reverse order?

---

# Data Types 2/2

now consider these questions:

- what is your first age?
- is your first name even or odd?
- what is your age in reverse order?
- is your top 3 favorite movies even or odd?

---

# Different kinds of data can only be manipulative in certain ways

## These are are called `Data Types`

---

# C++ Data Types

- here are a few of the most common data types in C++:

  - `int` or integer
  - `char` or character
  - `bool` or boolean (true / false)
  - `float` or floating point number (has decimal)
  - `double` (has decimal and twice as much precision)
  - `void` or nothing (used for functions)
  - `function` or a miniature program
  - `array` or an ordered collection of other data types

---

# `int`

- represents whole numbers
- can be negative, zero, or positive
- considered `numeric` and can be mixed with other `numeric` data types

```
int classes_per_week = 3;
double hours_per_class = 1.5;
double total_hours_per_week = classes_per_week * hours_per_class;

// break cout command over multiple lines to make it easier to read
cout << "You will spend "
<< total_hours_per_week
<< " hours in class this week";
```

---

# `float` and `double`

- represents any numbers with decimals
- `float` can store numbers with up to 7 decimal digits of precision
- `double` is twice as precise (but uses more memory)
- considered `numeric` and can be mixed with other `numeric` data types

```
float mass = 590.3; // grams
double gravity = 32.17404855643; // feet per second^2
double force = mass * gravity;
```

---

# Truncated Values 1/2

- `int`, `float`, and `double` have the different levels of precision (smallest to largest)
- when mixing them in calculations, be careful `which` ones you use and in what `order`

```
// what does this code produce?
float children_per_family = 2.3;
int families = 5;
int expected_total_children = families * children_per_family;
cout << expected_total_children;
```

---

# Truncated Values 2/2

- if you convert a high precision numeric to a lower precision numeric, you will lose precision / accuracy
- this is called `truncation`
- `truncation` does `not` round a value. digits are simply *lost*.

---

# `char`

- represents a single character
- uses `'` for definition (single quotation mark)
- digits and punctuation can be characters
- uppercase and lowercase letters are considered different
- there are special `chars` that we might not be able to see
- based on the [ASCII](https://en.wikipedia.org/wiki/ASCII) standard and its variations

```
char first_char = 'a';
char second_char = 'A';
char third_char = '5'; // this is not the same as int 5
```

---

# `string`

- an ordered collection of `char` (ie words and sentences)
- needs either `#include <iostream>` or `#include <string>`
- uses `"` for definition (double quotes)

---

# `'` and `"`

- **remember** single quotation for `char` and double for `string`
- some other programming languages don't make this distinction but in C++, this can `throw an error`.

```
char initial = "J"; // invalid code
string name = 'Jon'; // invalid code
```

---

# char comparators

- can use `<`, `<=`, `==`, etc comparators
- `chars` are compared via ASCII value
- generally in alphabetical order, with uppercase being lower than all lowercase

```
'a' < 'b'; // true
'z' > 'y'; // true
'B' < 'b'; // true
'Z' < 'a'; // true
```

---

# string comparators

- will compare first char of both strings
- if not equal, immediately return the the result of the comparison
- if equal, compare the next chars
- if one string is shorter than the other and you run out of chars to compare, the shorter comes first

```
"Boston" < "Cincincati"; // true
"South Dakota" < "South Korea"; // true
"New York" < "New York City"; // true
```

---

# `bool` 1/4

- either `true` or `false`
- often used by the computer to make decisions

```
bool is_underage = false;
if(is_underage){
	kick_out();
}else{
	let_in();
}
```

---

# `bool` 2/4

- there are other ways to get a `bool`
- here are some operators that `return a bool`

operator | meaning
----|---
`<` | less than
`<=` | less than or equal to
`>` | greater than
`>=` | greater than or equal to
`==` | equal to
`!=` | not equal to

---

# `bool` 3/4

- actually stored as 0 (false) and 1 (true)
- means you can actually do math with them

```
bool rain_mon = true;
bool rain_tue = true;
bool rain_wed = true;
bool rain_thu = false;
bool rain_fri = true;

int days_of_rain = rain_mon + rain_tue
+ rain_wed + rain_thu + rain_fri;
```

---

# `bool` 4/4

- can also use numbers as `bools`
- generally, 0 is false and anything that's not 0 is true
- this principle is true in other languages

```
if(42){
  cout << "you are correct!";
}

if(0){
  // this code will never run
}
```

---

# Note

- `function` and `array` will have their own chapters
- `void` represents "no value" and often used with `function`
