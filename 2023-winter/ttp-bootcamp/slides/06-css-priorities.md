---
theme: default
class: invert
paginate: true
---

# 05 - CSS Priority Rules
2023-01-11

---

# Review
## Type into chat 3 things that you learned during our last class

---

# Review Notes

- animation in CSS
  - `@keyframes` can be created and used with any element
- flexbox - a layout template using CSS
- using references / APIs
- `display`
- common pattern - use `position: absolute` and `position: relative` together


---

# CSS Conflicts

- it's very common to have conflict `property` definitions
  - this can result from importing multiple CSS libraries or used intentionally when writing your own
- an element will end up only using **one** property definition
  - might pick some definitions and ignore others from the same rule

---

# CSS Conflict Example

```
<div class='name last_name'>
  Wilson
</div>

<style>
  .name{
    font-family: Arial;  /* use */
    font-size: 14px;     /* ignore */
  }

  .last_name{
    font-size: 22px;     /* use */
    font-weight: bold;   /* use */
  }
</style>
```

---

# Resolution Algorithm

- CSS uses a complex algorithm to determine which definitions are used and which are ignored
- there are 3 major factors:
  - `cascade` - definitions that are loaded last are given priority
  - `specificity` - rules with more specific selectors are given priority
  - `inheritance` - elements inherit definitions of their parent and override defaults

---

# Cascading

```
<div>
  this text will be red
</div>

<style>
  div{
    color: blue;
  }

  div{
    color: red;
  }
</style>
```

---

# Specificity 1/2

```
<div id='target'>
  <p>
    this text will be blue
  </p>
</div>

<style>
  #target > p{
    color: blue;
  }

  p{
    color: red;
  }
</style>
```

---

# Specificity 2/2

- inline styles override `<style>` and external file definitions

```
<div style='color: red;'>
  this text will be red
</div>

<style>
  div{
    color: blue;
  }
</style>
```

---

# Inheritance

```
<div>
  this text will be red
  <p>
    this text will also be red
  </p>
</div>

<style>
  div{
    color: red;
  }
</style>
```

---

# Actual Algorithm

- each of these 3 factors have different weights; some are more important than other
- browsers use a specific algorithm to resolve the style when all more than 1 factor is in play
- generally: cascade > specificity > inheritance

---

# The black sheep

- CSS also has a `!important` keyword that elevates the priority of a definition
  - eg: `color: red !important;`
- any `!important` definition overrides any non `!important` definition
- however! many developers avoid it at all costs
  - makes it very hard to debug; have to search through all CSS rules
  - highly recommended to not use

---

# Intentional Conflicts

- sometimes, you intentionally want conflicting definitions

```
<div id='navbar'>
  <div class='button'>A</div>
</div>
<div class='button'>B</div>
<div class='button' disabled>C</div>

<style>
  #navbar{
    background-color: green;
    padding: 4px;
  }
  .button{
    background-color: green;
	color: white;
	display: inline-block;
	height: 2rem;
	width: 2rem;
  }
  #navbar .button{background-color: white; color: black;}
  .button[disabled]{background-color: grey;}
</style>
```

---

# References

- [MDN Web Docs on conflict resolution](https://developer.mozilla.org/en-US/docs/Learn/CSS/Building_blocks/Cascade_and_inheritance)
- [MDN Web Docs on cascade](https://developer.mozilla.org/en-US/docs/Web/CSS/Cascade)
- [MDN Web Docs on specificity](https://developer.mozilla.org/en-US/docs/Web/CSS/Specificity)
- [MDN Web Docs on inheritance](https://developer.mozilla.org/en-US/docs/Web/CSS/inheritance)
- [MDN Web Docs Test Your Skills: The Cascade](https://developer.mozilla.org/en-US/docs/Learn/CSS/Building_blocks/Cascade_tasks)

---

# Pause for Questions

---

# Live Coding Demo

---

# Lab
