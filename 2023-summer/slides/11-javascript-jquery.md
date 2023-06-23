# TTP Web Development Bootcamp Summer 2023
## 11 - Javascript and jQuery Intro

---

# Review
Type into chat 1 thing you learned during our last class

- forms
- radio buttons need to have the same name attribute to be mutually exclusive
  - radio buttons are mutually exclusive
  - checkboxes can have 1+ options selected
- how to use pickers such as datepickers
  - displays months, dates, and year, which can be used to epcify a date
- better understanding on how to implement buttons, icons
- how to add icons and styles from materialize
  - instead of having the image separate from the name or title
- `components` are reusable pieces of code that get or show info

---

# Cranking Up the Power

- originally, websites were **only** HTML (1993)
- then, CSS was added (conceptualized 1994, implemented 1996)
- users wanted more complex interaction
- Javascript comes on the scene (prototype 1995, standardized 1997)

---

# Intro to Javascript

- `not` related to Java
- (employers often don't know this)
- weakly typed language that resembles Python and C++ put together
- enhances the functionality and interactivity of websites
- too complicated to teach within our bootcamp
  - however, is recommended to learn since it opens the door for other industry standards (reactjs, nodejs)

---

# jQuery Library

- a JS library that simplifies code
- can achieve amazing things with little code
- already integrated with Materialize
- we'll be using this for the bootcamp
- also uses CSS selectors!
- [must be included](https://www.w3schools.com/jquery/jquery_get_started.asp) similar to Materialize

---

# jQuery Syntax

- all commands start the same way: `$('CSS Selector')`
- you can use any of the selectors we've studied already, no matter how simple or complex
- this is followed by 1 or more actions: `.action()`
```
// this hides all the images in the footer
// that have the class 'dev'
$('footer img.dev').hide();
```

---

# Chaining

- computer science concept where you can stack multiple commands together
- happens `in the order` you stack them
- changing the order can have complicated effects

```
// take the tag with id = 'profile_photo'
// first fade it out
// when done, fade it in
$('#profile_photo')
  .fadeOut()
  .fadeIn();

// what if the order was reversed?
```

---

# jQuery Event Handlers 1/2

- jQuery can `trigger` certain `events`
- `$('#submit_button').click()` will actually click on the `#submit_button`, just as if a user clicked it
- W3 Schools has [a good list of them](https://www.w3schools.com/jquery/jquery_ref_events.asp)

---

# jQuery Event Handlers 2/2

- jQuery can also execute code whenever these events happen
- do this by putting a `function` as an `input`
- similar to nesting HTML

```
// hide the warning element when
// the hide_button is clicked

$('#hide_button').click(
  () => {
    $('#warning').hide();
  }
);
```

---

# jQuery Effects

- jQuery can do is control how things look on the page
  - eg: moving, hiding, showing, transforming
  - this is called `effects`
- W3 Schools has [a good reference!](https://www.w3schools.com/jquery/jquery_ref_effects.asp)
- **note** jQuery can do so much more!

---

# Writing Javascript / jQuery

- like CSS, you have 2 options
  1. embedded into the HTML between `<script></script>` tags
  2. external `js` file using `<script src='path_to_file'></script>`
- due to the webpage `lifecycle`, it is best to wrap your jQuery code in a `$(document).ready(() => {/*code goes here*/})` handler
  - this ensures that all your code will run consistently and properly

---

# Pause for Questions

---

# Live Coding Demo
[repl](https://replit.com/@jonchin/2023-06-21-jQuery-Example)

---

# Lunch

---

# Coding Lab
## [Website Wizards](https://replit.com/@jonchin/Website-Wizards)
