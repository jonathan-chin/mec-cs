# TTP Web Development Bootcamp Summer 2023
## 02 - Self Closing Tags, Nesting, and Attributes

---

# Review
Type into chat 1 thing you learned during our last class

- HTML tags: used to define the structure and contents
- how to create tags: `<h1></h1>`
  - matching opening and closing tags
- how to break a line: `<br />`
---

# Self Closing Tags

- most tags have a matching opening and closing tag
- some tags don't have a closing tag; called `self closing`
- basically an opening tag but with ` />` at the end
- all other properties of opening tags still apply

---

# Self Closing Tag Examples

```
<br />
<hr />
<input />
<img />
```

---

# Nesting 1/2

- with normal tags (eg opening and closing tags), the content inside is often called its `child` or `children`
- there are no restrictions on what the `children` can be
- it can be text like we've seen before or more HTML tags
- *those* tags can have tags and so on, almost infinitely
- this is called `nesting`

---

# Nesting 2/2

- all of the children tags must be **closed** before the `parent` tag closes
- indenting and new lines are **not** necessary but make debugging the code easier

---

# Nesting Examples - Valid

```
<ol>
  <li>
    <strong>
      Hello
    </strong>
    <p>
      World!
      <br />
      Good Morning!
    </p>
  </li>
</ol>
```

---

# Nesting Examples - Invalid

```
<div>
  <p>
    Toronto, Canada
  </div>
</p>
```

---

# Thumb Poll 1/2

is this HTML valid or invalid?

```
<article>
  <div>
    <p>
      I took a deep breath and listened to the old brag of my heart: I am, I am, I am.
    </div>
  </p>
</article>
```

---

# Thumb Poll 2/2

is this HTML valid or invalid?

```
<table>
  <tr>
    <td>
      Average
    </td>
    <td>
      32,450
    </td>
  </tr>
</table>
```

---

# HTML Linting

- there is a concept in programming called `linting`
- discovers errors and standardizes your code to a certain style
- for HTML, we can use [this one](https://jsonformatter.org/html-validator)

---

# Tag Attributes 1/2

- sometimes, tags can receive extra information to modify the way they work
- sometimes, tags **need** extra information in order to work
- these are called `attributes`

---

# Tag Attributes 2/2

- attributes can only appear in an opening tag (or in a self closing tag)
- attributes take the form of `key="value"`
- no limits on how many attributes a tag can have, but only certain attributes have meaning

---

# Tag Attribute Examples

```
<img src="https://bit.ly/38kh8Lg" />
<input /> <!-- default type -->
<input type="password" />
<input type="checkbox" />
<input type="date" />
```

---

# General Forms of HTML

```
<tagname>children</tagname>
<tagname />
<tagname attr1="value1" />
<tagname attr1="value1" attr2="value2"></tagname>
<tagname1>
  <tagname2>
    children
  </tagname2>
</tagname2>
```

---

# HTML Page

An HTML page has certain required tags and structures

```
<!DOCTYPE html>
<html>
  <head>
    <!-- this is an HTML comment -->
    <!-- this section contains meta information about the page -->
  </head>
  <body>
    <!-- this section contains everything to be rendered and shown on the web browser -->
  </body>
</html>
```

---

# Pro tips and tricks

- run your code as often as possible
- don't worry about memorizing everything!

---

# Pause for Questions

---

# Lunch

---

# Questions

---

# Coding Lab
## [Choose Your Own Adventure](https://replit.com/@jonchin/TTP-2023-Summer-Choose-Your-Own-Adventure)
