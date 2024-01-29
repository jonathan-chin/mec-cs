---
theme: default
paginate: true
---

# 12 - Arrays
2023-12-02

---

# Review
## What is 1 thing you remember about last class?

- for loop
  - a loop that repeats itself a specific number of times
- while loop
  - as long as a condition evaluates to true, the block of code will continue to run
  - if the condition is false the first time you run, it won't be executed
- do while loop
  - same as while loop except is guaranteed to run at least once
- `break` - when executed, will exit the loop entirely
- `continue` - when executed, will skip the rest of the current `iteration`; unlike break, will stay in the loop and check the condition again
- `input validation` - making sure that what the user gives as input does not crash our program, whether intentionally or unintentionally

---

# The Need for Arrays

- imagine you are writing code for a video game and need to track the player's name and score
  - what variables would you create?
- imagine the game had 2 players; what variables would you create?
- imagine the game had 1,000,000 players; what variables would you create?
- what would you do if the game could have anywhere from 1 to 1,000,000 players?

---

# Intro to Arrays

- arrays hold multiple variables *of the same data type* in a single variable
- has its size defined on declaration
- uses square brackets `[]` predominantly

```
double temp_1;
double temp_2;
double temp_3;

// or

double temps[3];
```

---

# Accessing Arrays

- you can look at any single element within an array by `accessing` it
- an element's position is called its `index`
- arrays always start counting from 0

```
string days[7] = {"Mon", "Tues", "Wed", "Thurs", "Fri", "Sat", "Sun"};
cout << days[0]; // Mon
cout << days[1]; // Tues
cout << days[5]; // ???
cout << days[7]; // ???
```

---

# Mutating Arrays

- you can use the same `accessing` syntax to `mutate` (or change) the value in an array
```
double grades[3];

grades[0] = 94.5;
grades[1] = 90.2;
```

- be careful! it's possible to have an array index that is undefined.
- what is `grades[2]`?

---

# Initializing an Array

- use the `[]` to indicate a variable is an array
- you may indicate the array size
- you may also provide a list of initial values to be inserted *in order*
- you may skip specifying the array size *but must* provide its initial values

```
char consonants[21]; // explicit size but no initial values
char vowels[5] = {'a', 'e', 'i', 'o', 'u'}; // explicit size with initial values
char favorite_letters[] = {'a', 'b', 'c'}; // implicit size
char uncommon_letters[]; // will throw compile error
```

---

# For Loops and Arrays

- `for` loops and `arrays` are common to use together

```
string months[3] = {"Jan", "Feb", "Mar"};
// this for loop will go through each value in an array, from start to finish
for(int index = 0; // for loops usually initialized at 0 because of array counting
	index < 3; // use the size of the array
	index++){
	cout << months[index];
}
```

---

# Array Sizes

- arrays in C++ are a fixed size
- cannot grow or shrink once defined
- easiest way is just to track size in a separate variable

```
const int numNames = 5; // const because size cannot change
string names[numNames];
```

---

# Range Based For Loop

- there is a special for loop in C++ for going through an array, called a `range based` for loop
- the `syntax` is specific to C++; other languages have a similar thing but the `syntax` is different
- both the `range based` and generic `for` loops are very common to use in the industry

```
double stock_prices[4] = {1.5, 2.3, 3.7, 4.0};
for(double stock_price : stock_prices){
	cout << stock_price;
}
```

---

# Break

---

# Coding Lab

---

# For Next Class

- reread Chapters 8.1-8.4
- quiz next week
- Career Readiness assignment
