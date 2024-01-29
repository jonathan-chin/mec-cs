# 01 Introduction
## 2024-01-29

1. Instructional staff introduction
2. Review syllabus
3. [Overview Slides](https://www.db-book.com/slides-dir/PDF-dir/ch1.pdf) pages 1-16
4. Introduction to `.sql` files using [provided files](https://www.db-book.com/university-lab-dir/sample_tables-dir/index.html)
5. [online sqlite tool](https://www.db-book.com/university-lab-dir/sqljs.html)
6. Structure of a SQL statement
7. Coding Lab

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
