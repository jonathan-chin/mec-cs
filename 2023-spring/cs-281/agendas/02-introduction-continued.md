# 02 Introduction Continued
## 2023-02-01

---

1. review notes
2. [Overview Slides](https://www.db-book.com/slides-dir/PDF-dir/ch1.pdf) pages 17-33
3. review assignment

---

# Notes

---

# Physical Layer

- hardware is important for critical components like `live data`
- not my specialty; you can be fairly successful as a database manager and software engineer with little / no knowledge
- career options exist if you are interested in physical layer; can be well paid and have high job security
- our textbook calls this `physical data independence`

---

# JOIN

- the `,` operator and `JOIN` keywords are mostly the same
- however, `JOIN` is a better, more accepted practice
- `JOIN` syntax also allows for special kinds of joins like `LEFT JOIN` and `CROSS JOIN`
- our textbook prefers to use `,` though :(

---

# null values

- our textbook says that `null` values are "difficult to handle and it is preferable not to resort to them"
- not necessarily true
- it is `best practice` to explicitly specify which `attributes` can have null and which cannot
- your data model **MUST** explain what a `null` value means
- example: Google Form submissions that allow/don't allow anonymous submissions
