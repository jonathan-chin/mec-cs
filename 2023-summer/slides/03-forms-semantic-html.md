# TTP Web Development Bootcamp Summer 2023
## 03 - Relative and Absolute URLs, Forms, and Semantic HTML

---

# Review
Type into chat 1 thing you learned during our last class

- how to input photos and gifs
- how to add images
  - `<img src="url_goes_here" />`
- add `width` attribute to img
- attributes
- how to change the background and text color

---

# URLs

- Uniform Resource Locator
- used to indicate where a file is stored
- can be on the same server and needs a `relative` url
  - url **does not** start with `http://` or `https://`
- can be on a different server and needs an `absolute` url
  - url **must** start with `http://` or `https://`

---

# URL examples

```
<!-- absolute url -->
<!-- file exists on a different server (pexels.com) -->
<img src="https://www.pexels.com/photo/1170986/download/" />

<!-- relative url -->
<!-- file exists on the same server as this file -->
<img src="dog_on_roof.jpg" />
```

- **note** often, you have no control of files on other servers
- this can lead to broken images, links, etc
- you can upload files to your repls

---

# Forms

- HTML is used for both output (images, text) and input (textboxes, file uploads, etc)
- for input, we use forms

---

# The Form Tag

- all related inputs should be `nested inside` a `form` tag
- when that form is submitted, all the inputs will be sent together
- for now, should have an `action` attribute
  - when submitted, the browser will go to the URL specified in `action` with all the data
  - we'll replace this functionality later with `JS`
- needs a `button` child tag whose `type` is `submit`

---

# Inputs and Labels

- the `input` tag is the main way that you'll get information from the user
  - needs a `name` attribute to let the computer know what this info is
- the `label` tag is used to describe in a `human readable` way what should be provided
- inputs and labels are connected through specific attributes
  - input has an `id` attribute
  - label has a `for` attribute that matches the `id`

---

# Form Example

```
<form action="check_credentials.php">
  <input
    type="text"
    id="username"
    name="username"
    />
  <label for="username">
    Username
  </label>
  <input
    type="password"
    id="password"
    name="password"
    />
  <label for="password">
    Password
  </label>
  <button type="submit">
    Login
  </button>
</form>
```

---

# Other Form Tags

- `textarea` is used for large bodies of text
  - think `<input type="text" />` as a short answer and `<textarea></textarea>` as a long answer
- `select` is used to provide a dropdown of choices
  - used with `option` children tags
  - can select one or multiple

---

# Semantic Tags

- many of the tags we've used already have a tangible impact
- there are some tags that provide `computer readable` information rather than `human readable`
- these are called `semantic tags`
- [W3Schools](https://www.w3schools.com/html/html5_semantic_elements.asp) has a good guide on the different semantic tags


---

# Pause for Questions

---

# Lunch

---

# Coding Lab
## [Open Sesame](https://replit.com/@jonchin/03-Open-Sesame)
