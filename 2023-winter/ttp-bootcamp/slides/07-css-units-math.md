---
theme: default
class: invert
paginate: true
---

# 07 - CSS Units and Math
2023-01-12

---

# Review
## Type into chat 3 things that you learned during our last class

---

# Review Notes

- TBD

---

# Absolute and Relative Units in CSS

- since CSS is concerned with the visual presentation of HTML content, we use measurements often
- there are different units we can use, such as `px`, `pt`, `em`, `rem`, and `%`
- these are broken down into `absolute` units and `relative` units

---

# Absolute Units in CSS

- `absolute` units will always appear the same size on every device
- `remember!` in UI/UX, we cannot predict what the user's device is
- just like `responsive design`, we want to be flexible with as little code as possible
- `absolute` units are still used occasionally, for things like `border-width` and `border-radius`

---

# Relative Units in CSS

- `relative` units are based on some other aspect of the site
- `em` and `rem` are based off of font size; useful for elements with lots of text
  - eg `2rem` is twice the size of the font
- `vw` (view width) and `vh` (view height) are based off of the browser; often only used on large, parent elements like `<body>` or `<navbar>`
- `%` is based off of the parent element
  - **note**: `%` units with heights are sometimes wonky
- get into the habit of using `relative` units for most properties

---

# Math in CSS

- sometimes you need to calculate measurements on the fly
- eg: you want `left: 50%` but also an additional `left: 10px`
- this often happens when you need to combine `absolute` and `relative` units
- CSS provides a function named `calc()`
- eg: `left: calc(50% + 10px)`

---

# Functions in CSS

- CSS is nowhere near a fully fledged programming language
- however, some limited functions are available
- [W3Schools](https://www.w3schools.com/cssref/css_functions.php) has a good list
- [MDN Web Docs](https://developer.mozilla.org/en-US/docs/Web/CSS/CSS_Functions) has a longer list that includes functions in development and proposed for the next CSS version release

---

# Pause for Questions

---

# Final Notes: Using Tools

- in the industry, the most valuable resource is usually time
- companies can always pay you more, hire more developers, give you faster machines, etc
- time is tight! you can never just make more time
- so use the tools and strategies that maximize your use of time
  - read `APIs` to get the answers and examples straight from the source
  - use the right `IDE` to streamline your workflow

---

# Final Notes: CSS in the Wild

- CSS has many known, and sometimes large, limitations
- in the industry, you might encounter variations:
  - preprocessors like `Sass`, `LESS`, `Stylus`, and `PostCSS`
  - libraries like `JSS` and `styled-components`
  - coding patterns like `CSS-in-JS`
- ultimately, the basis of all of them is CSS

---

# Lab
