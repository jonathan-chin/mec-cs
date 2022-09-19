---
theme: default
paginate: true
---

# 04 - DataTypes
2022-09-17

---

# Comments 1/3

- Code can get crazy! Sometimes code that works isn't always code that makes sense

- Often, you will be working on a `team` to code a single project

- Or you will be working on a project for a long time (months or years)

- Comments help explain code in plain, simple English

---

# Comments 2/3

There are two styles of comments:

```
// single line comments for anything short

/*
multiline comments for long notes
this is also useful for commenting out code
that doesn't work or you want to disable
*/
```

Anything that is `commented out` is completely ignored by the computer

---

# Comments 3/3

- Well commented code is `highly valued` in whatever industry you work in
- Well commented code helps others understand your code and helps you understand other people's code
- Let's get into the `habit` of commenting our code now

---

# Data Types 1/2

The entire purpose of computer programs is to manipulate data. However, there are several different `kinds of data` that only make sense to manipulate in certain ways. Consider these questions:

- What is your first name?
- What is your first name in all capitals?
- What is your age?
- Is your age even or odd?
- What are your top 3 favorite movies?
- What are your top 3 favorite movies in reverse order?

---

# Data Types 2/2

Now consider these questions:

- What is your first age?
- Is your first name even or odd?
- What is your age in reverse order?
- Is your top 3 favorite movies even or odd?

---

# Different kinds of data can only be manipulative in certain ways

# These are are called `Data Types`

---

# C++ Data Types

Here are a few of the most common data types in C++:

- `int` or integer
- `char` or character
- `bool` or boolean (true / false)
- `float` and `double` or floating point number (has decimal)
- `void` or nothing (used for functions)
- `function` or a miniature program
- `array` or an ordered collection of other data types

---

# `int`

- Represents whole numbers
- Can be negative, zero, or positive
- Considered `numeric` and can be mixed with other `numeric` data types

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

- Represents any numbers with decimals
- `float` can store numbers with up to 7 decimal digits of precision
- `double` is twice as precise (but uses more memory)
- Considered `numeric` and can be mixed with other `numeric` data types

```
float mass = 590.3; // grams
double gravity = 32.17404855643; // feet per second^2
double force = mass * gravity;
```

---

# Truncated Values 2/2

- `int`, `float`, and `double` have the different levels of precision (smallest to largest)
- When mixing them in calculations, be careful `which` ones you use and in what `order`

```
// what does this code produce?
float children_per_family = 2.3;
int families = 5;
int expected_total_children = families * children_per_family;
cout << expected_total_children;
```

---

# Truncated Values 2/2

- If you convert a high precision numeric to a lower precision numeric, you will lose precision / accuracy
- This is called `truncation`
- `truncation` does `not` round a value. digits are simply *lost*.

---

# `char`

- Represents a single character
- Uses `'` for definition (single quotation mark)
- Digits and punctuation can be characters
- Uppercase and lowercase letters are considered different
- There are special `chars` that we might not be able to see
- Based on the [ASCII](https://en.wikipedia.org/wiki/ASCII) standard and its variations
- Rare for us to use

```
char first_char = 'a';
char second_char = 'A';
char third_char = '5'; // this is not the same as int 5
```

---

# `string`

- An ordered collection of `char` (ie words and sentences)
- Needs either `#include <iostream>` or `#include <string>`
- Uses `"` for definition (double quotes)
- Very common to use and also deeply complicated

---

# `'` and `"`

- **Remember** single quotation for `char` and double for `string`
- Some other programming languages don't make this distinction but in C++, this can `throw an error`.

```
char initial = "J"; // invalid code
string name = 'Jon'; // invalid code
```

---

# `bool` 1/3

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

# `bool` 2/3

- There are other ways to get a `bool`. Here are some operators that `return a bool`

operator | meaning
----|---
`<` | less than
`<=` | less than or equal to
`>` | greater than
`>=` | greater than or equal to
`==` | equal to
`!=` | not equal to

---

# `bool` 3/3

```
int birth_year = 1980;
int today_year = 2022;
int age = today_year - birth_year;
bool is_underage = age < 18;
if(is_underage){
	kick_out();
}else{
	let_in();
}

// no comments really needed here since variable names are self explanatory
```

---

# Note

`void`, `function`, and `array` are relatively advanced

We will learn about them later

---

# Coding Lab

---

# Homework Lab
