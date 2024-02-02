# 02 Introduction Lab
## 2024-01-31

1. review
2. [Finish slides](https://www.db-book.com/slides-dir/PDF-dir/ch1.pdf) pages 1-16
3. Introduction to `.sql` files using [provided files](https://www.db-book.com/university-lab-dir/sample_tables-dir/index.html)
4. [online sqlite tool](https://www.db-book.com/university-lab-dir/sqljs.html)
5. Structure of a SQL statement
6. Coding Lab
7. ERD diagram is available on Chapter 2, page 8 in the slides

---

# Review
## What is 1 thing you remember from our last class?

- prior to database systems, we had a loose collection of files
- reasons why database systems developed
  - inconsistencies (data types, updating)
  - easier link data between tables
  - more fine grained control over permissions
  - concurrent access by multiple users
- `schema` - a blueprint / structure of the tables in a database
  - similar to classes
- physical - isolation
  - outside of the scope of our course
- `data model` - includes relationships between tables, the features / structure / schema of the tables, the constraints, data itself
  - `relational` databases
- `Turing Test` - a set of requirements for a programming language to pass in order to be considered fully featured
  - does not pass test: `HTML`
  - does pass test: `C++`, `python`, `Javascript`
- flavors of `SQL`
  - eg: `MySQL`, `SQLite`, `postgres`, `aurora`
- `views` - slices of table depending on needs of viewer / user

---

# Example SQL commands

```
SELECT * FROM clients;

SELECT * FROM clients JOIN accounts ON client.id=account.client_id;

SELECT columns_you_want
FROM first_table_you_want
JOIN table_that_is_linked
ON comparison;

when a column name is ambiguous, use the table_name.column_name format
```

---

# For Next Week

- read Chapter 1
  - no need to do the questions, but they will be similar to quizzes / assignments
- quizzes start next week
