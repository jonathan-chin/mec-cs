---
theme: default
class: invert
paginate: true
---

# 09 - Introduction to jQuery
2023-01-17

---

# About

- jQuery is a JS library primarily focused on `DOM` manipulation
  - the `DOM` or Document Object Model is the structure of all the elements in HTML
- allows us to create, update, and delete elements
- also allows us to listen for events such as mouse hover in / out
- jQuery is currently being used in [77% of the 10 million most popular websites](https://w3techs.com/technologies/overview/javascript_library)

---

# Using it

- need to import it just like MaterializeCSS
- everything is based off the `$()` function
- `$()` takes a single argument that is a CSS selector
  - yes, the exact same CSS selectors from last week!
- once you have a jQuery reference, you can use `.` and any jQuery `action` on it
- because it uses CSS selectors, this can let you manipulate 1 or many elements

```
$('#confirm_button').hide();
```

---

# jQuery Effects

- similar to manipulating CSS rules

```
$('.target').hide();
$('.target').show();
$('.target').fadeIn();
${'.target').fadeOut();
${'.target').slideUp();
```

---

# jQuery HTML CRUD

- a common way to describe interfaces is with the `CRUD` acronym
- `Create` - make new elements or records
- `Read` - access existing elements or records
- `Update` - change existing elements or records
- `Delete` - remove existing elements or records

---

# jQuery Read

- jQuery can be used to access various parts of an element

```
const welcome_message_text = $('#welcome_message').text();
const username = $('#username').val(); // assume #username is <input />
const all_link_urls = $('a').attr('href');
```

---

# jQuery Update

- you can use the same functions when `reading` but instead pass a value argument

```
$('#welcome_message').text('sorry we are closed');
$('#username').val(default_username_value);

// set all links to point to sharemeals.org
$('a').attr('href', 'https://sharemeals.org');
```

---

# jQuery Delete

- permanently removes element from `DOM`
- different than hiding with CSS or `.hide()`

```
$('#target').remove(); // removes the element

// removes all children but keeps element
$('#container').empty();
```

---

# jQuery Create

- you can create new HTML elements by using tags instead of CSS selectors
- `$('<p></p>')` will create a new element
- you can use `.append()` and `.prepend()` on the **parent** element to then place that element in the `DOM`

```
const new_message = $('<p></p>').text('winter sale!');
$('#notification_area').append(new_message);
```

---

# Pause for Questions

---

# jQuery and CSS Classes

- since `class` manipulation is so common, jQuery has a `CRUD` just for CSS classes
- anything you do here can also be done with `.attr('class')`

```
$('.target').addClass('highlight');
$('.target').removeClass('highlight');

// add or remove depending on previous state
$('.target').toggleClass('highlight');
```

---

# Event Handling

- jQuery can execute functions based on various events
- need to pass a function into the jQuery action; this function will execute when the event happens
- can trigger on events like `click`, `dblclick`, `keypress`, `submit`, `change`, `load`

```
$('#confirm_button').click(function(){
  // when form is submitted, disable all <input /> tags
  $('input').attr('disabled', true);
});
```

---

# API

- [W3Schools](https://www.w3schools.com/jquery/default.asp)
- [jQuery](https://api.jquery.com)

---

# Notes

- remember! the order you import js files and libraries matters
- MaterializeCSS has some advanced components that use jQuery

---

# Coding Lab
