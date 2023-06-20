# TTP Web Development Bootcamp Summer 2023
## 10 - Form Components

---

# Review
Type into chat 1 thing you learned during our last class

---

# Component Library

- `components` are reusable pieces of code that provide common functionality
- they often either display info or retrieve info from the user
- Materialize has a several prebuilt components for you to use

---

# Forms

- a common need is to get info from the user
  - eg: their name, state, birthday, etc.
- we can use the [Materialize form components](https://materializecss.com/text-inputs.html) for highly stylized ways to get user input
- `form` tag needs to wrap around everything, even if we are using components
- it groups together different kinds of inputs when sending to the server
- can have several [attributes](https://www.w3schools.com/tags/tag_form.asp) to control how it behaves
- for now, have the `action` attribute go to `#`

---

# Form Components and the Grid

- often best practice to have form components take up 100% or 50% of a row
- humans generally read top to bottom, left to right
  - easy to miss form components on right side
  - therefore, usually best to use a whole row for 1 component
- therefore, apply `col` and `s12` (or any `6`) classes

---

# Note on Initialization

- some Materialize components have an `initialization` section in documentation
- this covers a **different language** (JS / JQuery), which we don't know yet but will soon
- this goes for any sample code with `language-javascript` tagged on it
- for now, you can **skip over them**

---

# Pause for Questions

---

# Live Coding Demo
## [repl](https://replit.com/@jonchin/2023-06-20-Materialize-Form-Component-Example)

---

# Lunch

---

# Lab
## [Mecha Mechanics](https://replit.com/@jonchin/06-Mecha-Mechanics)
