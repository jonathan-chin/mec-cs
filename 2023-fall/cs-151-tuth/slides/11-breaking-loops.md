---
theme: default
paginate: true
---

# 11 - Breaking Loops and Input Validation
2023-11-14

---

# Review
## What is 1 thing you remember from our last class?

- `increment` and `decrement` operators
  - `unary operator` that will add 1 or subtract 1 from a variable
    - has one operand; only requires 1 input
  - eg: `input++` or `input--` or `++input` or `--input`
  - used mostly because we're lazy
- loops
  - repetition of code
- `while` loop
  - can run between 0 and infinite number of times
  - used to repeat a block of code some number of times
- `do-while` loop
  - body of loop will execute at least once
  - `do{/* body */}while(/* condition */)`
- `for` loop
  - different kind of `while` loop
  - composed of 4 parts
    - `initialization`
	- `condition`
	- `update`
	- `code block` / `body`
  - runs for a specific number of iterations
  - has a lesser chance of being an `infinite loop`
- "standard" `for` loop
  - `for(int index = 0; index < 42; index++){}`


---

# Code Along
## Review Programming Assignment

---

# Ending Loops

- all loops will stop when the condition is false
- sometimes, the logic is more complicated and you want to end the loop "early"

---

# break 1/2

- the `break` keyword will immediately end the loop
- nothing else matters

---

# break 2/2

```
// division calculator
int divisor;

do{
  std::cout << "Enter a number: ";
  std::cin >> divisor;
  if(divisor == 0){
	break;
  }
  std::cout << 100 / divisor << "\n";
}while(true);
```

---

# continue 1/2

- the `continue` keyword will skip the rest of the **loop body**
- in a `while` and `do-while` loop, will just check the condition
- in a `for` loop, will execute the `update` step and then check the condition

---

# continue 2/2

```
// count all numbers to 100
// except skip multiples of 3
for(int index = 0; index < 100; index++){
  if(index % 3 == 0){ // true if multiple of 3
    continue;
  }
  std::cout << index << "\n";
}
```

---

# Input Validation 1/

- when building `User Interfaces` (UI), always have to check the user isn't giving invalid input
- eg: number is too high or too low, string is too short or too long
- common code pattern is to use a `do-while` loop

---

# Input Validation 2/

```
int age;

do{
  std::cout << "What is your age? ";
  std::cin >> age;
  if(age < 5 || age > 99){
    std::cout << "Really? Try again.\n";
  }
}while(age < 5 || age > 99)
```

---

# Break

---

# Coding Lab

---

# For Next Week

- Read 8.1 - 8.4
