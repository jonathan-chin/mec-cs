---
theme: default
paginate: true
---

# 13 - Variable Scope
2024-05-06

---

# Variable Scope 1/2

- variables are only defined / known within their scope
- if a variable is referenced outside of their scope, it will either be unavailable (compile error) or refer to something you probably don't intend (logic error)
- analogy:
  - Jon Chin is known at Medgar Evers College. If you ask for him, I will show up.
  - Jon Chin is also known at Pace University. If you ask for him, I will also show up.
  - Jon Chin is not known at BMCC. If you ask for him, no one will know who you are talking about.
  - Jon Chin is kind of known at City Tech. If you ask for him, someone will show up but it won't be me.

---

# Variable Scope 2/2

- a variable is accessible in its current code block and any code blocks `nested` inside
- you can refer to a variable that was defined in a `parent` code block
- the reverse is not possible
- variables only live in the function they're defined

---

# Valid Example

```
int main(){
  char choice = 'a';
  int points = 250;
  if(choice == 'a'){
    if(points > 0){
      // do something
    }
  }
}
```

---

# Invalid Example

```
int multiply(int i){
  return i * multiplier; // multiplier is out of scope!
}

int main(){
  int multiplier = 3;
  int input = 5;
  int product = multiply(input);
}
```

---

# Arguments and Return Values

- the most common way to pass data between functions / scopes is by using arguments and return values
- a copy of the value is created and given to a function when it is called
- there are more complex ways to pass data, but not in CS 151
- when passing data through arguments / return values, the `name` does not matter

---

# Variable Name Example

```
boolean checkAge(int y, boolean l){
  return y < 1996 && l == true;
}

int main(){
  int yearThatAPersonWasBorn = 1980;
  boolean isBornOnLeapYear = true;
  boolean is18 = checkAge(yearThatAPersonWasBorn, isBornOnLeapYear);
  // variable names don't matter
  // order of arguments matter!
}
```

---

# Global Variables

- variables `can` be defined outside of `all` functions
- these are considered `global variables` are accessible in `all` scopes
- there are very few times when this is recommended
- most of the time, you should avoid this because it can make your program unreliable

---

# Global Variable Example

```
int multiplier = 5;

int multiply(int input){
  return input * multiplier;
}

int main(){
  int i = 10;
  std::cout << i
  << " * "
  << multiplier
  << " = "
  << multiply(i);
}
```