---
theme: default
class: invert
paginate: true
---

# 08 - Introduction to JS
2023-01-17

---

# Review
## Type into chat 3 things that you learned during our last class

---

# Review Notes

- TBD

---

# History

- first public-ready browser released in 1993
- served only HTML; CSS was released in 1996
- pages could only be static; no interactivity, like a PDF
- javascript (JS) developed and released in 1995

---

# Language Features

- [Turing complete](https://en.wikipedia.org/wiki/Turing_completeness)
- [weakly typed](https://en.wikipedia.org/wiki/Strong_and_weak_typing) - loose rules about variable types
- [dynamically typed](https://en.wikipedia.org/wiki/Type_system#Dynamic_type_checking_and_runtime_type_information) - checks variable type compatibility on runtime
- generally, similar to python (minus reliance on indents)

---

# Variable Declaration

- there are 3 keywords to use when declaring a variable in JS

```
var first_name; // works but has some vulnerabilities
let last_name; // same as var but is safer to use
const address = '123 Fake Street; // defines a constant
```

- best practice: use `const` everywhere unless you need `let`; almost never use `var`

---

# C Style Syntax

- aside from variable and type declaration, uses much the same syntax as `C` and its derivatives

```
function find_larger(a, b){
  if(a > b){
    return a;
  }else{
    return b;
  }
}

const largest = find_larger(5, 10);
```

---

# IO 1/2

- there are a few basic ways to do input/output (`IO`) that we'll use today
- `console.log(what_you_want_to_print)` will silently output to  developer console
  - great for debugging; generally, should remove from `production ready` code
  - analogous to python `print()` and C++ `cout`
- `alert(what_you_want_to_print)` will halt all interaction and display your info
  - obnoxious but useful in debugging
  - should `definitely remove` from production ready code (very few exceptions)
  
---

# IO 2/2

- `window.prompt(variable)` is like `alert()` in that it will halt interaction
  - will ask user for input and store in variable
  - rarely if ever used in production ready code
- `window.confirm()` is like `alert()` in that it will halt interaction
  - gives an ok and cancel button
  - returns true if ok is pressed, otherwise returns false
  - uncommon in production ready code; more common than `window.prompt()`

---

# Use with HTML

- JS files can be run without HTML
- can be used in HTML with `<script>`
  - for `external JS`, use the `src` attribute to specify where the file is located
  - can also use `inline JS` by placing JS code between opening and closing tags
- generally, JS is `executed immediately` as soon as the `<script>` is loaded
  - can cause timing issues if you're not careful

---

# API

- [W3Schools](https://www.w3schools.com/js/default.asp)
- [MDN Web Docs](https://developer.mozilla.org/en-US/docs/Web/JavaScript)

---

# Notes

- JS is `client side only`
  - can only run in a browser; limited access to things like files
- `NodeJS` is JS [runtime environment](https://en.wikipedia.org/wiki/Runtime_system) that allows us to run a flavor of JS `server side`
  - much more powerful
  - uses *almost* same language as JS

---

# Pause for Questions

---

# Coding Lab
