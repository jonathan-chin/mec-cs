# TTP Web Development Bootcamp Summer 2023
## 06 - Advanced CSS Selectors

---

# Review 1/2
Type into chat 1 thing you learned during our last class

---

# Review 2/2
What is nesting?

---

# Familial Vocabulary

- when talking about the relationship between tags, `familial vocabulary` is often used
- common words are: `parent`, `child`, `descendant`, `sibling`
- depends on where they are nested relative to each other
- **note** CSS usually only selects elements *downstream*
  - eg: you can select the child of an element, but you can't select its parent
  - (actually, possible with *psuedoselectors* but that's another lesson)

---

# Familial Vocabular Example

```
<main>
  <article>
    <p></p>
    <p></p>
  </article>
</main>
<footer></footer>
```

- article is a `direct child` and a `descendant` of main
- both ps are `children` or `descendants` of main
- both ps are `direct children` of article
- both ps are `siblings` of each other
- main and footer are `siblings`
- p is a `child` of a `sibling` of footer

---

# More CSS Selectors

| symbol | purpose | description |
| --- | --- | --- |
| [space] | descendant | all descedants, including direct child |
| > | direct child | all tags nested 1 level deep |
| + | adjacent sibling | all tags directly after (but not nested) |
| ~ | general sibling | any tag that is on the same level |

---

# Combining CSS Rulesets

- remember: programmers are lazy
- any time they can, they will keep `DRY`
- if the same declarations apply to multiple selectors, you can use `,` between selectors

```
.highlight, .title {
  font-weight: bold
}

.title {
  font-size: 32px
}
```
- **note**: tags with the `class` title will have both rulesets applied: bold *and* 32px size

---

# DRY

- `D`on't `R`epeat `Y`ourself
- reduce duplication of code as much as possible
- easier to maintain long term projects; easier for other developers to join team
- opposite is `W`e `E`njoy `T`yping

---

# Attribute Selectors

- also possible to select based on a tag's attributes
- uses `[]`
- for any arbitrary attribute; for class and id, use `.` and `#` instead

```
[type='checkbox']
[type='range']
```

---

# Combining class / attribute with tag Selector

- sometimes you want to select a `tag` that has a specific `class` or `attribute`
- you can place the selectors `next` to each other `without` a space

| selector | meaning |
| --- | --- |
| `p.summary` | p tags with summary class |
| `p .summary` | all elements with summary class that are descendants of a p tag |
| `input[type='checkbox']` | input tags with type attribute equal to checkbox |
| `input [type='checkbox']` | all elements with type attribute equal to checkbox that are descendants of an input tag |

---

# Psuedo-classes

- for *even more* options, you can use `psuedo-classes`
- selectors start with `:`
  - eg: `:nth-child(3)`
- a bit advanced for now; you can ignore them

---

# Reference

- [W3 Schools](https://www.w3schools.com/cssref/css_selectors.php) has a good reference list of all the CSS selectors
- **remember** you can click on any of them to get more information and an example

---

# Pause for Questions

---

# Lunch

---

# Exercise

- try this [CSS game](https://flukeout.github.io)
- when finished, take a screenshot of the levels you completed and submit on Airtable
