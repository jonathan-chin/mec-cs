---
theme: default
class: invert
paginate: true
---

# 04 - Display Property and Animations in CSS
2023-01-10

---

# Review
## Type into chat 3 things that you learned during our last class

---

# Review Notes

- how to insert characters / text
- how to create animations (`:hover` and `transition`)
- using `selectors`
  - `.class_name`, `#id_name`, and `tag_name`
- how to use borders
- how to do shading
- basic syntax of CSS
- `box-shadow` - position a shadow / shading on any element
- how `absolute` and `relative` `positions` interact
- `classes` are used in both HTML and CSS
  - in HTML, we have the class attribute eg: `class='favorite'`
  - in CSS, we have a class selector eg: `.favorite` that styles all elements with `class='favorite'`

---

# Display Property

- many of the CSS properties we've been playing around with only affect the elements themselves
  - ie setting a `border` property will only put a border on the selected elements
- the `display` property affects how an element lines up with others
  - `block` lets you specify height/width but **does not let other elements next to it**
  - `inline` lets you place other elements next to it **but does not height/width**
  - `inline-block` is best of both worlds: height/width and adjacent elements
  - `flex` provides even more control of how elements align with each other

---

# Quick Introduction to Flex

- [This cheatsheet](https://css-tricks.com/snippets/css/a-guide-to-flexbox) is the one I always use even though [W3Schools](https://www.w3schools.com/css/css3_flexbox.asp) has a tutorial
- `flex` is pretty much the basis of `responsive design`
- `flex` can be mixed with `inline-block` etc but needs to be nested

```
<div style='display: flex;
            flex-direction: column'> <!-- controls alignment -->
  <div style='display: inline-block;
              height: 100px; width: 100px;
              background-color: red'>
    content 1
  </div> <!-- shapes content -->
  <div style='display: inline-block;
              height: 100px; width: 100px;
              background-color: green'>
    content 2
  </div> <!-- shapes content -->
</div>
```

---

# Position Property

- `position` allows you to control where an element is placed
  - `static` is default and lets the browser decide
  - `relative` same as static but lets you adjust
  - `fixed` places it at a specific place in the browser window and it will never move
  - `sticky` same as `fixed` but will move as you scroll
  - `absolute` places it at a specific place in its `parent` container
- all values **except** `static` let you also use the following properties
  - `top`, `bottom`, `left`, `right`
  - don't need to specify all of them; often you only specify one or two
---

# Position Property Example

```
<div style='display: inline-block;
            height: 100px; width: 100px;
            background-color: red;'>
  content 1
</div>
<div style='display: inline-block;
            height: 100px; width: 100px;
            background-color: red;
            position: relative;
            bottom: 10px'>
  content 2
</div>
```

---

# absolute and relative 1/2

- an `absolute` element with no `relative` parent is placed according to browser
- an `absolute` element with a `relative` parent is placed according to parent

```
<div style='display: inline-block;
            height: 100px; width: 100px;
            background-color: red;
            position: absolute;
            bottom: 10px'>content 1</div>
<div style='display: inline-block;
            height: 200px; width: 200px;
            border: 1px solid black;
            position: relative;'>
  <div style='display: inline-block;
              height: 100px; width: 100px;
              background-color: red;
              position: absolute;
              bottom: 10px;'>
    content 2
  </div>
</div>
```

---

# absolute and relative 2/2

- this combination of `absolute` and `relative` `position` properties is can be used in your playing card project from yesterday
- [here is an example](https://replit.com/@jonchin/2023-01-09-Playing-Cards-CSS-Exercise-Personalized)

---

# animations

- as we saw yesterday, the `transition` property can be used for basic animation
- more complex animations can be achieved with the `@keyframes` rule
  - this is a new piece to our syntax is the CSS `at-rule`
  - you can read more about it [here](https://developer.mozilla.org/en-US/docs/Web/CSS/At-rule)
- [W3Schools](https://www.w3schools.com/css/css3_animations.asp) has an extensive tutorial on animations

---

# Coding Lab Demo

---

# References

- [display](https://www.w3schools.com/css/css_display_visibility.asp)
- [position](https://www.w3schools.com/css/css_positioning.asp)
- [flexbox cheatsheet](https://css-tricks.com/snippets/css/a-guide-to-flexbox)
- [transitions](https://www.w3schools.com/css/css3_transitions.asp)
- [animations](https://www.w3schools.com/css/css3_animations.asp)

---

# Pause for Questions

---

# CSS is for Kids!
## Mini project

---

# Lunch
