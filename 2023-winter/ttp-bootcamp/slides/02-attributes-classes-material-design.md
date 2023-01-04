---
theme: default
class: invert
paginate: true
---

# 02 - Attributes, Classes, and Material Design
2023-01-04

---

# Review
## Type into chat 3 things that you learned yesterday

---

# Review Notes

- learned how to edit HTML
- whitespace is ignored
  - our spacing doesn't reflect the structure of the web page, unless we use the appropriate tags
- using linting to review code
  - tools that review and reformat your code to match a standard style
- `<h1>` `<br />` `<a href=''>`
- GitHub is a good place to store your project for your portfolio
- we can embed programs into a website using javascript
- HTML = noun, CSS = adjective, Javascript = verb
- `IDE` and replit
- most tags have opening and closing, but not all

---

# Hear Ye Hear Ye Example

- check out this [example repl](https://replit.com/@jonchin/2023-01-03-replit-example)
- HTML tags section off and categorize different parts of content
- each browser has their own default ways of presenting different tags
- while a lot can be designed with bare HTML, the experience is often inconsistent across browsers and devices
- for far finer control of visuals,`CSS` was invented

---

# HTML Attributes

- `attributes` are information in addition to the tag name
- some tags are useless without providing attributes
- others change behavior when provided additional attributes

---

# HTML Attributes Syntax

- `attributes` can be added to the `opening tag` **only**
- they come after the tag name but before the `>` separated by spaces
- in the form of `attribute_name='value'`
- tags can have unlimited number of attributes

---

# Vocabulary

- `server` is computer owned and maintained by someone else (most of the time) that's always connected to the internet
  - a piece of software running somewhere that has one purpose up on the web
  - can have specific roles / purposes (image server, html server, video server)
- `server` is a wholesale store; people can come in and grab things
  - there can be multiple, `distributed` servers that have the same thing
- `servers` are like branches of a tree. they try to provide what is needed and if they can't, a different root is used.
- `servers` are machines hosting a service that must be running and connected to the internet
---

# HTML Attribute Examples

```
<img src='https://thispersondoesnotexist.com/image' />
<input /><!-- defaults to text input -->
<input type='checkbox' />
<input type='color' />
<input type='date' />
<input type='range' />
```

---

# W3Schools Playground

- [<input />](https://www.w3schools.com/tags/tag_input.asp)
- [<img />](https://www.w3schools.com/tags/tag_img.asp)
- **Note:** W3Schools defines when a tag has `required` attributes, like the img tag
- it also lists all the possible attributes, along with a page for each attribute

---

# Activity
## Revisit your repl from yesterday and add images!

---

# Special attributes

- there are 2 special attributes that can be added any tag: `class` and `id`
- these help select and apply `CSS styles` to one or more tags
- `class` is used for a group of tags
- `id` is used for one exact instance of a tag (also called an `element`)
- you can also use the `tag name` to get all elements of that tag

---

# Deck of Cards Analogy

- think of a standard deck of playing cards
- there are several ways that you can group and select cards

| type | example  |
|---|---|
| color | *give me all the red cards* |
| suit | *give me all the spades* |
| value | *give me all the face cards* |
| one exact card | *give me the queen of diamonds* |
| all | *give me all the cards* |

- which of the previous selections would use `class`, `id`, or `tag name`?

---

# Deck of Cards Example

```
<card
  class='face_card black clubs'
  id='jack_of_clubs'>
    jack of clubs
</card>

<card
  class='red diamonds'
  id='2_of_diamonds'>
    2 of diamonds
</card>
```

---

# Pause for Questions

---

# Revisit Repl Boilerplate

- some tags are required
  - `<html></html>` needs to wrap your entire document
  - `<body></body>` needs to wrap anything you want to be visible
  - `<head></head>` is optional and includes metadata about your page; nearly all HTML documents have metadata
- quick tutorial: how to add pages and links in replit

---

# Libraries and Modules

- an important concept in computer science is the use of `libraries` (sometimes called `modules`)
- `libraries` are packages of existing code written by someone else that are used in a project
- helps build projects faster that are more reliable and easier to maintain

---

# Material Design

- [a set of design principles](https://m3.material.io) developed by Google
- based off a lot of research
- provides consistent experience across **all** of their products

---

# Materialize CSS

- a CSS `library` that allows use to implement Material Design using only `classes`
- like all technologies, it has its own [API](https://materializecss.com)
- let's do a quick tutorial!

---

# Lunch
