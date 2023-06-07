# TTP Web Development Bootcamp Summer 2023
## 04 - Intro to CSS and class and id Attributes

---

# Review
Type into chat 1 thing you learned during our last class

- how to implement music
- how to add color
- how to add emojis
  - eg: `&#12345;`
- how to add color to a dropdown
- how to format text (headings, emphasis, etc)
- how to do multiselect
- relative and absolute urls, servers

---

# CSS

- Cascading Style Sheets
- control how tags look and feel on the page
  - eg: color, size, shape, placement, opacity, etc
- made specifically to work with HTML; CSS code by itself is useless
- a new, different language

---

# CSS Syntax - Declarations

- a CSS `declaration` is a single line of code that defines one aspect
- it is in the form of `property: value;`
- many of these can be grouped together with `{}` into a `declaration block` (or just `block`)

---

# CSS Syntax - Declaration Example

```
p {
  margin-top: 10px;
  font-size: 14pt;
  color: red;
}

```

---

# CSS Selectors

- CSS declaration blocks need to know which tags to apply to
- this is called the `selector`
- CSS selectors can be very precise (and very complicated)
- you can use a `tag name` to apply those styles to each instance of that tag  on the page

---

# CSS Selectors Example

```
a {color: purple}
p {padding: 10px}
img {border-radius: 3%}
```

- here, `a`, `p`, and `img` are selectors
- everything in the `{ }` are the `styles` applied to those tags

---

# CSS and id Attribute

- sometimes, you want to `style` a single item on your page
- not a single tag, but one specific thing, like the correct answer or a person's current location on a map
- you can use the `id` attribute
- in HTML, add a **unique** value for the id attribute
- in CSS, use that same value with a `#` as the selector
- mnemonic - use `#` like an id number

---

# CSS and id Example

```
<p id="summary">ipsum lorem</p>
<p>dolor sit amet</p>

#summary {
  font-weight: bold;
}

```

---

# CSS and class Attribute

- sometimes, you want to style a group of similar tags
- you can use the same `class` attribute for this
- in HTML, add a value for the class attribute
- in CSS, use that same value with a `.` as the selector
- note: tags can be different and share the same class
- note: tags can have multiple classes

---

# CSS and class Example

```
<img src="..." class="profile active" />
<img src="..." class="profile inactive" />

.profile {width: 50px; height: 50px;}
.active {border: 1px solid green;}
.inactive {opacity: 0.5;}
```

---

# Summary

- `id` is used for exactly 1 element on the page
- similar to a person's social security number
- `class` is used for groups of elements on the page
- similar to people's favorite movies

---

# Including CSS

- can be included into HTML in 3 different ways
- `external` css is a separate file
- `internal` css is in a `style` tag in the HTML
- `inline` css is baked into individual HTML tags
- all 3 have strengths and weaknesses
- all 3 are generally used in large projects

---

# External CSS

- all `rulesets` are included in a `.css` file
- use the `link` tag in the `head` tag to include it
- can have several external CSS files

```
<head>
  <link rel='stylesheet' href='style.css' />
</head>
```

---

# Internal CSS

- all `rulesets` are included in a `style` tag
- can have multiple style tags

```
<style>
  #profile_photo {
    border: 4px solid yellow;
	border-radius: 50%;
  }
</style>
```

---

# Inline CSS

- CSS declarations are coded directly into a `style` attribute
- will **only** apply to that instance of the tag
- generally very difficult to maintain

```
<ol>
  <li>
    milk
  </li>
  <li style="text-decoration: underline">
    bread
  </li>
</ol>
```

---

# CSS References

- [W3 Schools](https://www.w3schools.com/css/css_intro.asp) has a great set of tutorials 

---

# Pause for Questions

---

# Lunch

---

# Coding Lab
## [The Max's Menu](https://replit.com/@jonchin/04-The-Maxs-Menu)
