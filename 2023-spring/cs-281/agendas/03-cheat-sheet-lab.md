# 03 Cheat Sheet Lab
## 2023-02-06

---

1. review
2. [ERD generator](https://github.com/Alexis-benoist/eralchemy)
3. practice exercises 2.1-2.8
4. [cheat sheet](https://learnsql.com/blog/sql-basics-cheat-sheet/sql-basics-cheat-sheet-a4.pdf)

---

# Review
## name one thing you remember from our last class

- physical data independence - allow a database to maintain logical structure even if physical structure is changed
- better to use `join` instead of comma
  - comma will always be a left join
  - join syntax will let us do more complicated joins as well
- atomicity - group database queries / processes together; all run or none at all
  - group of queries is called a transaction
- history of database systems
  - focused on big data
- different database users
  - naive users - someone who doesn't know how to code and instead use an application / interface
  - application developer - creates applications for naive users
  - administrative user - manage access, read / edit records
  
---

# notes

- selection - think of as a filter. only give back some rows / records, not all
  - in SQL, this is defined by WHERE
- projection - return only some column / attributes.
  - in SQL, this is the SELECT ____ FROM 

---

# practice tasks

1. Find all the sections that take place on Mondays

```
SELECT * FROM time_slot
	JOIN section
	ON time_slot.time_slot_id = section.time_slot_id
WHERE day = "M"
```

2. Find all the sections of all the courses in the Finance department


3. Find all the students taking Genetics

```
SELECT student.ID, name FROM course
JOIN section
	ON course.course_id = section.course_id
JOIN takes
	ON section.sec_id = takes.sec_id
	AND takes.course_id = course.course_id
JOIN student
	on takes.ID = student.ID
WHERE title = "Genetics"
```

4. Find all students who are taking courses in 2018 and later

SELECT * FROM takes
NATURAL JOIN student
WHERE year >= 2018;
