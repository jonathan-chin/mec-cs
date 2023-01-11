---
theme: default
class: invert
paginate: true
---

# 04 - Introduction to CSS
2023-01-09

---

# Review
## Type into chat 3 things that you learned during our last class

---

# Review Notes

- how to add the `grid` structure
  - Materialize uses 12 columns
  - content on each row must be <= 12
  - beyond 12, content will be forced to next row
- how to change colors with Materialize CSS
- how to make HTML `responsive`
  - resize according to device size (and capabilities)
  - uses `breakpoints`
  - `breakpoints` are preset points that change layout
  - Materialize uses `s, m, l, xl`
- alignment (left, right, center)
- changing font size
---

# Fine Grain Visual Control

- remember: each browser has its own basic style defaults
- we can get better control using `CSS`
- `CSS` is Cascading Style Sheets
- controls how tags / elements are displayed and limited interaction (animations, mouse events, etc)

---

# How to Include CSS

3 main ways:
- with the `style` attribute, also known as `inline`
  - quick and dirty
  - hard to maintain so not preferred
  - limited functionality
  - still used in production but is rare
- with `<style>` tag; pretty rare
- as external css file; this is usually preferred

---

# CSS General Syntax

- CSS is broken down into 2 parts: `selector` and `rule`
- `selector` identifies which elements on the page are being styled
- `rule` is a collection of `properties` that define how those elements should appear
- `inline styling` will **only** include the `properties`, not the selector or rule
  - will only apply to that element, hence why it's hard to maintain
- both `<style>` and external files will use `selectors` and `rules`

---

# CSS Selector Syntax

- there are 3 basic selectors, which we've seen before:
  - `class` selector in the form of `.class_name`
  - `id` selector in the form of `#id_name`
  - `tag` selector in the form of `tag_name`

---

# CSS Selector Examples

```
                        /* CSS uses this style of comments */
.round                  /* any element with round in its class */
#user_profile_picture   /* the element with id='user_profile_picture' */
img                     /* all <img> elements */
```

---

# Combining CSS Selectors

- there are several complex ways to combine selectors to pick out the *exact* elements you want to style
- [W3Schools](https://www.w3schools.com/cssref/css_selectors.php) has an in depth example
- `vocabulary` - often when talking about CSS selector combinations, we use familial vocabulary (eg parent, child, and sibling)
  - Grabiner from Simmons University has some [good diagrams](http://web.simmons.edu/~grabiner/comm244/weekfour/document-tree.html)

---

# CSS Properties and Rule Blocks Syntax

- a CSS property has the general syntax: `property_name: value;`
- a CSS rule is simply several properties wrapped with `{}`
- note: there are more advanced features of CSS properties that require different syntax

---

# CSS Example 1/2

```
<div id='nametag'>
  <div class='name' id='first_name'>
    Barack
  </div>
  <div class='name' id='last_name'>
    Obama
  </div>
  <div id='occupation'>
    Former President
  </div>
</div>
```

---

# CSS Example 2/2

```
/* in external file style.css */
#nametag{
  border: 2px solid black;
  border-radius: 8px;
  padding: 2rem;
}

.name{
  font-family: Arial;
}

#last_name{
  font-weight: bold;
  font-size: large;
}

#occupation{
  font-family: Tahoma;
  font-style: italic;
}
```

---

# Pause for Questions

---

# Remember!
## Think like a coder; read the API

---

# Coding Lab
## Comic Book Trading Cards

---

# Playing with selectors

- before writing your own CSS files, let's practice writing just the `selectors`
- there's an excellent game called [CSS Diner](https://flukeout.github.io/)!

---

# Lunch
