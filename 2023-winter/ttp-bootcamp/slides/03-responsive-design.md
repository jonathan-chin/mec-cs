---
theme: default
class: invert
paginate: true
---

# 03 - Responsive Design
2023-01-05

---

# Review
## Type into chat 3 things that you learned yesterday

---

# Review Notes

- `margin: auto`, styling using the `style` attribute and CSS in general
- libraries, things we can `import` and use
- materialize
- replit
- databases and servers are not the same thing
- CDN, eg cloudfare, a server with things you can retrieve / download from
  - content delivery network
- `src` attribute
- how to include other files (images) in replit
- learning where to find tags; self directed learning; **how to think like a coder**
- `class` is for groups of tags
- `id` is for one specific tag
- `tag name` is for everything

---

# A History of Screen Sizes

- traditional print media is largely standardized
- example: in the US, paper is generally 8.5" x 11"
- even in the early days of tech adoption, everyone had relatively the same setup: boxy CRT monitors with 1024x768 resolution
- information density was fairly predictable

---

# Modern Screen Sizes

- today, people access websites and apps on a variety of devices: laptops, tablets, smartphones
- these devices have a several different screen sizes and resolutions
- for a consistent and enjoyable `UI/UX`, the same website / app should feel natural regardless of size
- this is called `Responsive Design`

---

# Responsive Design Examples

- [this site](http://karenkramerfilms.com) was built without responsive design in mind
- what are some issues you can observe?
- **note:** you can use your web developer console to simulate different devices
- [this is a dummy site](https://www.copterlabs.com/demo/media-queries) built to demonstrate the power of responsive design
- how is this experience different?

---

# What is Responsive Design?

- a design principle that websites (and webapps, hybrid apps, etc) should alter their UI/UX to match individual users' setup (resolution, input devices, screen orientation, etc) to always deliver the best possible experience
- there are several strategies to accomplish this
- today, we'll be focusing on `positioning` and `size`

---

# Grid System

- a common way to achieve `responsive design` is to implement a grid
- there are many libraries with their own version of a grid system; the details are different but the major concepts are the same
- in Materialize, the screen is divided into `12 equal columns`
- content can be fitted into 1 or more columns

---

# Responsive Grid System

- a responsive grid system will also allow content to be `reshaped` and `reflowed` depending on screen size
- accomplished by defining `breakpoints`, which are thresholds of `screen width` at which content should be shaped differently

| breakpoint | meaning | likely device |
| --- | --- | --- |
| s | small | smartphone |
| m | medium | tablet |
| l | large | laptop / large tablet |
| xl | extra large | 4k monitor |

- these is Materialize's breakpoints; other libraries might have different breakpoints

---

# Materialize's Grid Mechanics

- everything is wrapped in a `.container` component
- content is divided in `.row` components
- content is further divided into `.col` components
- `.col` components also have breakpoint size class, such as `.s12`
- `.col` components can have multiple such classes at different breakpoints
- **note:** the syntax of putting a `.` in front of a word is borrowed from `CSS selector` language (which we'll learn next week!); `.word` means a component with a `word` class

---

# Materialize's Grid Mechanics Example

```
<div class='container'>
  <div class='row'>
    <div class='col s12 m6 l4'>
      this will be 100% on small screens (12/12)
	  50% on medium screens (6/12)
	  33% on large screens (4/12)
	</div>
  </div>
</div>
```

---

# Notes

- `.container` can be used without grids, if you just want automatically set margins
- `.col` components don't need to specify every breakpoint
  - eg: it can have `.s6` and `.l9` but no `.m#` or `.xl#` class
- Materialize will try to fit as many `.col` components side by side; if the total of sizes is ever greater than 12, it will spill onto a new row
- [the api](https://materializecss.com/grid.html) also demonstrates how to use `push/pull` and `offsets` feature to achieve even more complex behavior

---

# Pause for Questions

---

# Live Demo

---

# Activity
## Resume your projects from yesterday but start using the grid system and responsive design!
