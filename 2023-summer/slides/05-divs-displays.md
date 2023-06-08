# TTP Web Development Bootcamp Summer 2023
## 05 - div and the display property

---

# Review
Type into chat 1 thing you learned during our last class

---

# Layout in HTML 1/2

- there are 3 major display behaviors for an HTML tag
  - determines **if** you can set the size
  - also determines if other tags can be placed next to it

| level | can set size | can have tag next to it |
| --- | --- | --- |
| `block` | yes | no |
| `inline` | no | yes|
| `inline-block` | yes | yes |

---

# Layout in HTML 2/2

- HTML generally operates in rows
- a `block` level element will take an entire row, regardless of how wide it is
- an `inline` level element will take up only its width and can stack up alongside many other `inline` level elements
- all tags are inherently either `block` or `inline`

---

# Layout in HTML Examples

- `p` tags are `block` level by default
- `a` tags are `inline` level by default

```
<p>hello</p>
<p>world</p>

<a href="#">hello</a>
<a href="#">world</a>
```

---

# CSS display property

- default display behavior can be changed with the `display` CSS property
- `inline-block` provides the best of both worlds
- there are other values you can use, all [listed here](https://www.w3schools.com/cssref/pr_class_display.php)
- `flex` is another important behavior but is a whole other lesson

---

# CSS display property example

```
.article {
  display: inline-block;
  width: 200px;
}

<p class='article'>This is article 1</p>
<p class='article'>This is article 2</p>
```

---

# Container Tags

- to build more complicated layouts, you can use container tags
- `div` and `span` can be used but [remember about semantic tags!](https://www.w3schools.com/html/html5_semantic_elements.asp)
- combined with `display` properties, these containers can allow you to produce `columns`

---

# A Note on Flexbox

- using `display` is the traditional method
- a much more powerful, modern tool called `flexbox` is available
- started in 2009 and is pretty universal today
- we'll visit it later this bootcamp!

---

# Pause for Questions

---

# Live Coding Demo
[on replit]()

---

# Lunch
