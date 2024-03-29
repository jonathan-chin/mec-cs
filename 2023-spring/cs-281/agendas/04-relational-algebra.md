# 04 Relational Algebra
## 2023-02-08

---

1. [Twitch channel](https://www.twitch.tv/sharemeals)  
HackPrinceton
2. review
3. SQL vs NoSQL real world example
4. generated ERD
2. [chapter 2 slides](https://www.db-book.com/slides-dir/PDF-dir/ch2.pdf)

---

# Review
## name one thing you remember from our last class

- ERD - able to understand relationships between tables
- different kinds relationships
  - one-to-one
  - one-to-many
  - many-to-one
  - many-to-many
- cheat sheets!
- join tables not directly linked needs several join
- `join table_2 on table_1.attr = table_2.attr`
- `cartesian product` - display of every possible combination of 2 tables
- `natural join` - `join` without having to specify `on` so long as there are matching attribute names

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
- best practice is to give each record a `random` id
- real world example: [Tom Scott covers the Moonpig bug](https://www.youtube.com/watch?v=CgJudU_jlZ8)
