---
theme: default
paginate: true
---

# 15 - Functions
2024-05-03

---

# Functions

- miniature programs that can be run from other programs / functions
  - embodies `input`, `processing`, and `output`
  - you've been using one the entire time: `int main()`
- keeps to `DRY` principle
  - Don't
  - Repeat
  - Yourself
- textbook calls this `modular programming`

---

# Function Definition 1/2

```
return_type function_name (argument_type_1 argument_name_1, argument_type_2 argument_type_2, etc){
	// body of code
	return value;
}

char get_first_letter(string word){
	return word[0];
}
```

- note: `arguments` and `parameters` have slight differences in meaning in your textbook. I use `arguments` to mean both.
- first line is referred to as the `function header`

---

# Function Definition 2/2

- a function does not need any arguments. in this case, argument list is empty.
- a function does not need to return anything. in this case, it `must` have a `void` return type

---

# Function Calls 1/2

- a `function call` is when a defined function is requested to execute
- the `control flow` will pause where it currently is, run the function, and then come back

---

# Function Calls 2/2

```
int getSquare(int number){
	return number * number;
}

int main(){
	int numberToSquare;
	std::cout >> "Enter a number to square: ";
	std::cin << numberToSquare;
	std::cout << "The answer is " << getSquare(numberToSquare);
	// more code
}



```

---

# Function Prototypes 1/3

- `functions` MUST be defined before they are called
- some file structures prevent you from doing this
  - usually happens when your program is multiple files
- `function prototypes` are brief descriptions of functions that can be `type checked`
- if you are coding in a single file, you can use function definitions instead

---

# Function Prototypes 2/3

```
// function prototype
double square_root(int);

int main(){
  // ...
  // function call
  double answer = square_root(9);
}

// function definition
double square_root(int number){
  // ...
}
```

---

# Function Prototypes 3/3
```
// this structure is also valid
// function definition
double square_root(int number){
  // ...
}

int main(){
  // ...
  // function call
  double answer = square_root(9);
}
```

---

# Header Files

- in large projects with multiple files, some files might use the same functions
- instead of redefining the same functions multiple times, only function prototypes are needed
- often, a file specifically with function prototypes is created, called a `header file`
- not necessary if working with a single C++ file

---

# Code Along

[https://replit.com/@jonchin/2024-05-03-functions-example](https://replit.com/@jonchin/2024-05-03-functions-example)

---

# For Next Week

- read 6.1-6.9 and 6.12
- quiz next week
