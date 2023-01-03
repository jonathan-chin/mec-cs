---
theme: default
class: invert
paginate: true
---

# 01 - Introduction and HTML Fundamentals
2023-01-03

---

# TTP Winter Bootcamp

- fundamentals of web development: HTML, CSS, and Javascript
- entry point into other TTP resources and programs
- how to think like a coder

---

# Rules and Expectations

- `attendance` - our program is so condensed that each day covers a lot.
- `participation` - we're very mobile and can adapt the curriculum to meet your needs. for this, we need to know what you need.
- `access to a laptop` - our main focus is coding, which is only feasible if you have a laptop. frequently, we'll ask you to share your screen. attending sessions only on your smartphone is insufficient.

---

# Example Projects from Previous Bootcamps

- [Matching Game](https://replit.com/@IdowuIgbinoba/finalproject)
- [Wheel of Riches](https://replit.com/@kathrynabrown/Wheel-of-Riches-MEC-project)
- [System Tron](https://replit.com/@Jaleel12329/Final-Project-Externship-System-Tron-Group)
- [Number Quest](https://replit.com/@Tamika/Number-Quest)

---

# Intro to Staff

- Jon, Instructor
- Juan, Director and Advisor
- Kalyssa, Career and Success Coach
- Michael, Teaching Assistant and Alumnus
- Keith, Teaching Assistant and Alumnus

---

# Ice Breakers
## Type your answers into chat and we'll discuss!

---

# What technology are you most excited by?

---

# What is the most interesting country or city that you've been to?

---

# Which NYC borough is the best?

---

# Tools

- [replit](https://replit.com) - a web based `IDE` that will be our primary coding environment
- [github](https://github.com/jonathan-chin/mec-cs/tree/main/2023-winter) - a repository for our slides and any other resources
- [W3 Schools](https://www.w3schools.com) - a hands on guide to the languages we'll be learning and more
- [MDN Web Docs](https://developer.mozilla.org/en-US) - another guide to the languages we'll be learning
- [HTML Lint](https://html-lint.com/) - a handy tool to `lint` our html
- [CSS Lint](https://css-lint.com/) - a handy tool to `lint` our css
- [JS Formatter](https://js-formatter.com/) - a handy tool to `lint` our javascript

---

# Vocabulary

- `IDEs` are *integrated development environments* and provide all the tools you need to build a particular project
- `git` is tool used for file versioning; it is an industry standard but we will only use it at the surface level for now
- `linting` is formatting and validating code against a particular standard

---

# Pause for Questions

---

# The Backbone Technologies of the Web

- `HTML` structures web content and assigns meaning (noun)
- `CSS` styles web content and controls how it is displayed (adjective)
- `Javascript` amplifies web content and provides interactions (verb)

We'll be learning all 3 during this bootcamp, starting with HTML!

---

# What is HTML

HTML is a markup language that tells browsers how to structure the content you receive from websites. It indicates what roles and meanings different parts have, such as the `title`, the `navigation bar`, `images`, `forms`, and more.

---

# HTML Tags

HTML accomplishes this by using `tags`. These generally come in pairs: an opening tag and its corresponding closing tag. Everything in between gets assigned a particular meaning by the browser.

```
<h1>
  How to Bathe a Cat
</h1>

<ol>
  <li>
    Don't.
  </li>
</ol>
```

---

# HTML Syntax

There are rules for writing the HTML markup language; this is called its syntax.

An `opening tag` **must**:
- start with a `<` and end with `>`
- immediately follow the `<` with the tag's name
- optionally include more information between the tag's name and `>`

A `closing tag` **must**:
- start with a `</` and end with `>`
- immediately follow the `</` with the tag's name
- include **nothing** else

---

# Fail Safe vs Fail Danger

- web technologies are generally `fail safe`; if there is an error, they will try to continue as best they can
- other technologies can be fail danger; if there is an error, they will stop or abort

---

# HTML Syntax Examples

| opening tag | closing tag | meaning |
| --- | --- | --- |
| `<p>` | `</p>` | paragraph |
| `<strong>` | `</strong>` | important information |
| `<h1>` | `</h1>` | header, 1st level |
| `<h2>` | `</h2>` | header, 2nd level |
| `<h3>` | `</h3>` | header, 3rd level |
| `<img />` | | image |
| `<br />` | | line break |

---

# Whitespace in HTML

Tags are king in HTML. Anything that's not inside a tag will get `rendered` as a single line of text. For example, take this excerpt from Sylvia Plath. How do you think it will be rendered?

```
Stasis in darkness.
Then the substanceless blue
Pour of tor and distances.

God's lioness,
How one we grow,
Pivot of heels and knees!-The furrow
```

---

# Summary

- HTML gives structure and meaning to content
- HTML uses `tags` that have a specific `syntax`
- Without tags, content gets `rendered` as a single line of text

---

# Lunch Break

---

# Intro to our TAs

- Michael
- Keith

---

# Pause for Questions from Morning

---

# Reading APIs and Guides

- Technology changes so quickly that an `indisposable skill` is to know how to read an `api`
- `api`, or *application programming interface*, is basically the user's manual for a programming language or guide
- You can stay up to date on existing technologies and/or teach yourself new ones as they come out.

---

# W3Schools Tutorials and References

- [W3Schools Tutorials](https://www.w3schools.com/html/default.asp) are divided into topics that each cover a handful of tags.
- [W3Schools References](https://www.w3schools.com/tags/default.asp) has every single tag in a searchable list
- if you know what you want to do, you can search through these guides to learn the `tags`, `syntax`, and `examples`.
- if you have free time, you can browse through this (or any other api) in search of anything to interesting to play with. these can be incorporated into your existing projects or even spark a new project.

---

# Intro to Replit Boilerplate

- when starting an HTML, CSS, and JS repl, replit will give you `boilerplate` code. some of it is `necessary` and some of it is just good practice.
- let's review it together!

---

# Hear ye! Hear ye!

- let's practice adding HTML tags to content so that it is rendered better by a browser
- [fork this repl](https://replit.com/@jonchin/2023-01-03-hear-ye-hear-ye). it contains excerpts from the New York Times, but only the text. your task is to wrap the text with HTML tags to make it look more like a news website.
