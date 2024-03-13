
# 05 The Relational Model
## 2024-02-26

---

1. [chapter 2 slides up to 7](https://www.db-book.com/slides-dir/PDF-dir/ch2.pdf)
2. labs 02-2 and 02-3 need to be finished

---

# Review
## name one thing you remember from our last class

- types of relationships
  - one to one - eg: food order to person, student to ID, person to social security number
  - one to many - eg: biological father to biological children, house to person, letter grade to tests, person to date of birth
  - many to many - eg: students to classes, passengers to drivers, children to parents, authors to books, markers to professors
- tables have attributes
  - attributes are columns
- parallel databases
  - multiple databases that share the same purpose / data
- implied relations
  - sometimes called `virtual fields`
- transaction - a logical group of statements
  - all or none
  - maintains `data integrity`

---

# SQL vs NoSQL real world example

- Share Meals has data across 4 tables in 3 databases
  1. Firestore (communities and users)
  2. Firebase Auth (users)
  3. Realtime Database (user messaging tokens)
- we chose NoSQL because its benefits fit our needs
- no enforced relations between tables / databases
- database is 5+ years old, data has beecome inconsistent
- now, I have to manually clean up / reconcile data :(

---

# Security Concerns with primary keys

- there are a few common ways to generate a unique primary key
  - use a counter that increases with each row
  - generate a string based on the timestamp upon creation
- however, this could unintentionally expose data about other records, causing a security flaw
- best practice (maybe?) is to give each record a `random` id
- real world example: [Tom Scott covers the Moonpig bug](https://www.youtube.com/watch?v=CgJudU_jlZ8)
