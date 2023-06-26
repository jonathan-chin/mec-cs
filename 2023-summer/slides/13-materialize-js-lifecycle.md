# TTP Web Development Bootcamp Summer 2023
## 13 - Materialize JS Components and the HTML Page Lifecycle

---

# Review
Type into chat 1 thing you learned during our last class

---

# Materialize JS Components

- more complex components
- requires HTML, CSS, and JS
- has 2 ways to initialize
  - with `vanilla JS`
  - with `jQuery`
  - choose 1 or the other, not both
- [listed here](https://materializecss.com/auto-init.html)

---

# The HTML Page Lifecycle

- `lifecycle` is a general CS term used to describe the order of events when something is created or destroyed
- the main piece of HTML is the page or `document`
- we've seen that the order in which we write tags is important but that's not the whole story
- due to things like latency and server availability, resources may load **out of order**
- `$(document).ready()` will run once everything is loaded
  - ensures that any Materialize initializations will run correctly

---

# Live Coding Demo
[repl]()

---

# Lunch

---

# Coding Lab
[Have Code Will Travel](https://replit.com/@jonchin/Have-Code-Will-Travel)
