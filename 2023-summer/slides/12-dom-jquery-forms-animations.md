# TTP Web Development Bootcamp Summer 2023
## 12 - The DOM, jQuery Forms, and CSS Animations

---

# Review
Type into chat 1 thing you learned during our last class


- jQuery is a Javascript library
- makes writing JS easier
- Javascript and Java are not related!
- jQuery commands all start with `$('')`
- jQuery can be used to add animations to a page
  - it can also do a lot more
  - such as change opacity
- JS can control multimedia and animate images
- JS is the programming language of the web
  - not learning this bootcamp but you should learn it because it's hella useful
  - also allows you to pick up ReactJS and NodeJS

---

# Vanilla Javascript

- Javascript without any libraries is often called `vanilla javascript`
- jQuery is built **on top** of javascript
- if you know or want to learn it, you can mix-and-match vanilla javascript and jQuery

---

# The DOM

- `DOM` stands for the `Document Object Model`
- refers to all of the tags on an HTML page
- tags here are called `nodes`
- for our purposes, these are the same

---

# jQuery Manipulating the DOM

- jQuery can add, modify, and delete from the DOM
- `.remove()` will delete node(s)
- `.text("new text")` will change the contents of a node(s)
  - **note**: jQuery can do more than just edit the text
- adding new nodes is a bit more complicated

---

# jQuery Accessing Form Inputs

- can read or set an HTML input tag with `.val()`
- use `.val()` without arguments to retrieve an input's value
- pass an argument into `.val()` to set / ovewrite an input's value
- can now add some more interactivity with forms

---

# CSS Animations

- CSS also has a way to do smooth animations
- a bit more complicated to implement
  - however, it is preferred over jQuery since it has no outside `dependencies`
- W3 Schools has [a good guide](https://www.w3schools.com/css/css3_animations.asp)

---

# jQuery toggleClass()

- can add or remove a class via jQuery using `addClass()` and `removeClass()`
- for more flexibility, you can use `toggleClass()`
  - will add the class if the tag doesn't have it
  - will remove the class if the tag has it
- combined with CSS animations, you can animate tags on demand!

---

# Live Coding Demo
[repl](ttps://replit.com/@jonchin/2023-06-22-jQuery-Forms-and-CSS-Animations-Example)

---

# Lunch

---

# Lab
## Continue Your Choice
