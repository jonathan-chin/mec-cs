---
theme: default
paginate: true
---

# 14 - Arrays
2022-11-12

---

# Intro to Arrays

- Arrays hold multiple variables *of the same data type* in a single variable
- Has its size defined on declaration
- Uses square brackets `[]` predominantly

```
double temp_1;
double temp_2;
double temp_3;

// or

double temps[3];
```

---

# Accessing Arrays

- You can look at any single element within an array by `accessing` it
- An element's position is called its `index`
- Arrays always start counting from 0

```
string days[7] = {"Mon", "Tues", "Wed", "Thurs", "Fri", "Sat", "Sun"};
cout << days[0]; // Mon
cout << days[1]; // Tues
cout << days[7]; // ???
```

---

# Mutating Arrays

- You can use the same `accessing` syntax to `mutate` or set an index in an array
```
double grades[3];

grades[0] = 94.5;
grades[1] = 90.2;
```

- Be careful! It's possible to have an array index that is undefined.
    - What is `grades[2]`?

---

# Initializing an Array

- Use the `[]` to indicate a variable is an array
- You may indicate the array size
- You may also provide a list of initial values to be inserted *in order*
- You may skip specifying the array size *but must* provide its initial values

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
for(int index = 0; // for loops usually initialized at 0 because of array counting
	index < 3;
	index++){
	cout << months[index];
}
```

---

# Array Sizes

- arrays in C++ are a fixed size
- cannot grow or shrink once defined
- easiest way is just to track size in a separate variable

---

# Range-Based For Loop

- There is a special for loop in C++ for going through an array
- The `syntax` is specific to C++; other languages have a similar thing but the `syntax` is different
- The generic for loop coding pattern is pretty standard

```
double stock_prices[4] = {1.5, 2.3, 3.7, 4.0};
for(double stock_price : stock_prices){
	cout << stock_price;
}
```

---

# Coding Lab
