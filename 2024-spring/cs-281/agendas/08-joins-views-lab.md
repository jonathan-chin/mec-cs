# 07 Joins and Views Lab
## 2024-03-13

---

# Agenda

1. review joins and views
2. lab

---

# Review

- natural join - automatically matches on all columns that have the same name and only retains one version of each column
- inner join - returns all rows that are both in A and B (assuming there's a relation)
- left outer join - (assuming there's a relation) returns all rows in A. if they have a matching record in B, it includes that data. if not, places NULL for each of the columns that would be in B
- right outer join - (assuming there's a relation) same as left outer join but flipped
- full outer join - (assuming there's a relation) returns all rows in A and B. if rows in A have matching record in B, it includes that data. if not, places NULL in appropriate columns.

- `on` specifies how to join tables
- `where` filters out rows after the tables have been joined
- different predicates have different priorities

```
SELECT * FROM student;
SELECT * FROM advisor;

-- join both tables together but make sure we don't lose any student records
SELECT * FROM student LEFT OUTER JOIN advisor; -- no ON predicate so uses cartesian product
SELECT * FROM student LEFT OUTER JOIN advisor ON ID = s_id;

-- find all courses with prereqs and match them up
SELECT * FROM course INNER JOIN prereq
ON course.course_id = prereq.course_id;

SELECT * FROM course NATURAL INNER JOIN prereq;

SELECT * FROM course INNER JOIN prereq USING (course_id);

-- find all courses that DO NOT have a prereq

SELECT * FROM course NATURAL LEFT OUTER JOIN prereq WHERE prereq_id IS NULL;
```

- `nested subqueries` - statement that exists within another statement
  - eg: `SELECT * FROM (SELECT * FROM student WHERE tot_cred > 50) WHERE dept_name = 'Comp. Sci.'`
  
- `views` - subsection of a database that provides a mechanism to hide data
  - `virtual table`
  - need them because of different users
    - technical, non technical, and admin
