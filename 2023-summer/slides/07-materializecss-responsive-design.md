# TTP Web Development Bootcamp Summer 2023
## 07 - Materialize and Responsive Design

---

# Review
Type into chat 1 thing you learned during our last class

- advanced css selectors (using familial vocabulary)
  - descendant, direct child, sibling
  - pseudoclasses (start with `:`)
    - first-child, last-child, only-child, etc
  - `*` selector
- keep things DRY (Don't Repeat Yourself)
  - less clutter, more readable code
  - allows for other devs to easily join
  - code is easier to maintain
---

# Frameworks

- coders are lazy!
- instead of reinventing the wheel, they often share code with each other
- these are sometimes called `frameworks`, `libraries`, `packages`, or `modules` depending on the details and programming language
- many are Free and Open Source (FOSS) but there are licensed / paid libraries
- **fun fact**: 75% of the Share Meals app is built upon someone else's code

---

# External CSS and JS files

- frameworks are often 1+ external files
- can be included whether on the same server or a different server
  - remember the difference between `absolute` and `relative` paths?

```
<!-- css file -->
<link rel='stylesheet' href='path_to_file' />

<!-- js file -->
<script src='path_to_file'></script>
```


---

# Material Design

- a design philosophy developed by Google
- all Google products have the same look and feel
- read more about it [here](https://m2.material.io/design/introduction)

---

# Materialize

- takes the Material Design philosophy and implements it into code
- specifically, it's a `CSS framework`
- [getting started guide](https://materializecss.com/getting-started.html)

---

# How Materialize Works

- once Materialize is included, you can use predefined `class` values to add style and functionality
- want to turn something into a button? add the `btn` class
- want to turn that button big? add the `btn-large` class
- want to make it also disabled? add the `disabled` class
- `classes stack`

---

# Live Coding Demo
[repl](https://replit.com/@jonchin/2023-06-13-Materialize-Example)

---

# Lunch

---

# Responsive Design Intro

- before computers, physical media (books, newspapers, flyers) were all predictable sizes
- you could count on how much information you can fit
- even in early days of computers, everyone had pretty much the same setup
  - boxy, beige CRT monitors with 1024x768 resolution

---

# Myriad of Devices

- today, people access websites on several kinds of devices
- smartphone, tablet, laptop, etc
- different screen sizes and capabilities
  - eg: touch screen vs mouse
- the answer? `responsive design`

---

# Responsive Design Examples

- `not` responsive [website](http://karenkramerfilms.com/)
- responsive [website](https://www.swiss.com/xx/en/homepage)

---

# Responsive Design
## is giving the user the best possible experience considering their setup

(resolution, input devices, screen orientation, etc)

---

# Grid system

- a popular solution is to divide the screen up into a `grid`
  - Materialize does this but so do other frameworks
  - equal vertical slices covering the width
- designate how many slices you want an item to take
  - on small devices (smartphones)
  - on medium devices (tablets)
  - on large devices (laptops)
  - on xlarge devices (4k monitor)

---

# Other Features

- can hide tags based on size
- can change orientation / direction based on size
- often uses flexbox under the hood

---

# Continued Live Coding Demo

---

# Coding Lab
## [Into the Multiverse](https://replit.com/@jonchin/05-Into-the-Multiverse)
