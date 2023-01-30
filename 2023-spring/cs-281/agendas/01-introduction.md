# 01 Introduction
## 2023-01-30

1. [Overview Slides](https://www.db-book.com/slides-dir/PDF-dir/ch1.pdf) pages 1-16
2. Introduction to `.sql` files using [provided files](https://www.db-book.com/university-lab-dir/sample_tables-dir/index.html)
3. [online sqlite tool](https://www.db-book.com/university-lab-dir/sqljs.html)
4. Structure of a SQL statement
5. Coding Lab


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
