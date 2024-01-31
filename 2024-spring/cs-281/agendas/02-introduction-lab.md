# 01 Introduction
## 2024-01-29

1. review
2. [Finish reviewing slides](https://www.db-book.com/slides-dir/PDF-dir/ch1.pdf) pages 1-16
3. Introduction to `.sql` files using [provided files](https://www.db-book.com/university-lab-dir/sample_tables-dir/index.html)
4. [online sqlite tool](https://www.db-book.com/university-lab-dir/sqljs.html)
5. Structure of a SQL statement
6. ERD diagram is available on Chapter 2, page 8 in the slides
7. Coding Lab

---

# Review
## What is 1 thing you remember from our last class?

---

# Example SQL commands

```
SELECT * from student JOIN department ON student.dept_name=department.dept_name;

SELECT columns_you_want
FROM first_table_you_want
JOIN table_that_is_linked
ON comparison

when a column name is ambiguous, use the table_name.column_name format
```
