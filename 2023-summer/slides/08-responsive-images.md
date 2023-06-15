# TTP Web Development Bootcamp Summer 2023
## 08 - Responsive Images

---

# Review 1/2
Type into chat 1 thing you learned during our last class

- responsive design: giving the user the best possible experience considering their setup.. iPhone, tablet, Computer
- grid system: helps layout your page by dividing into 12 equal columns
- frameworks / library
  - code from other resources we can use in our projects
- Materialize CSS - gives "oomph" to html
- adding Materialize
  - `<link rel='stylesheet' type='text/css' href='path_to_file' />`
  - `<script src='path_to_file'></script>`
  - can use a CDN

---

# Review 2/2

What is Responsive Design? Why do we need it?

- responsive design: giving the user the best possible experience considering their setup.. iPhone, tablet, Computer

---

# Responsive Text and Images

- text naturally reshapes itself to fit its container
- if it is too long, it will continue on the next line
- images (and video) can't really do that
- they need special strategies to make them responsive

---

# Aspect Ratio

- `aspect ratio` is the relationship between a width and height
- the *exact* size is usually not important
- `aspect ratio` needs to be maintained, otherwise the image will be stretched and will look weird

---

# Strategy 1: max-width

- set max-width to 100%
- height will scale (and keep aspect ratio)
- image will shrink if needed
  - and won't look pixelated
- image retains original size if container is too big
- this is how [Materialize](https://materializecss.com/media-css.html) does it

---

# Strategy 2: width

- set width to 100%
- height will scale (and keep aspect ratio)
- image will grow to fit its container
  - the container will resize based on the grid system
- sometimes gets too big and looks pixelated

---

# Strategy 3: background-size: cover

- instead of a traditional image, set the `background-image` property of a container
- set `background-size` to `cover`
- image will automatically resize but may cut off width or height
- with strategic planning, this can be fine!
- not traditional image (bad for accessibility?)
- might need to set height of container

---

# Live Coding Demo
[repl](https://replit.com/@jonchin/2023-06-14-Responsive-Images-Example)
