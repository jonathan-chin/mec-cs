# Midterm Review Notes
## 2023-03-29

---

# good tutorials on various things

https://www.w3schools.com/

---

# nested subqueries

- using the results of one query to populate another
```
example:
INSERT INTO scholarships
SELECT
random(),
semester,
year,
ID,
1000
FROM takes
WHERE grade = "B-" OR grade = "B" OR grade = "B+”;


find every section in 2017 of every course with a prereq
```

---

# group by

- used in conjuction with aggregate functions
- avg(), sum(), count(), min(), max()

---

# order by

- defaults to ascending order
- can specify ASC or DESC to change the order
- can specify more than 1 column to sort on

---

# having

- used to filter on any aggregate column, such as sum(), avg(), count(), min(), max()
- applies to the result of the group by

```
example:
-- find the total number of all students
-- taking classes in 2017 grouped by department
-- where the total count is 2 or greater
SELECT dept_name, count() as student_count FROM student
NATURAL JOIN takes
WHERE year = 2017
GROUP BY dept_name
WHERE student_count >= 2;

```

---

# create view

- to give the user limited readability on the database (read permissions)

```
-- create a view that showed all instructors
-- without showing their salaries

CREATE VIEW instructors_without_salary AS
SELECT ID, name, dept_name FROM instructor;

SELECT * FROM instructors_without_salary;
```

---

# alter table

- add columns
- delete columns
- rename columns
- change column data types
- change primary / foreign keys
- change constraints

```
-- add a year_founded column to the department table

ALTER TABLE department
ADD COLUMN year_founded int;




```

---

# insert into

- will only create new rows

---

# update

- allows you to change values inside of columns in existing rows

```
UPDATE department SET year_founded = 2000
WHERE dept_name = "Biology";
-- LIMIT 1;

SELECT * FROM department;

```


---

# example

```
for each course with a prereq, print out
the title of the course and the title of its prereq

SELECT course.title AS course_title, prereq_course.title AS prereq_title
FROM prereq
JOIN course
ON prereq.course_id = course.course_id
JOIN course AS prereq_course
on prereq.prereq_id = prereq_course.course_id;

```


---

# Quiz 07 - retake

```
/*
create a new table named vacation_days with the following columns:

id as integer, primary key
instructor_id as text, foreign key referencing the ID column in the instructor table
days as an integer
*/

CREATE TABLE vacation_days(
  id int,
  instructor_id text,
  days int,
  primary key (id),
  foreign key (instructor_id) references instructor(ID)
  );


/*
	
for every instructor, add a record into the vacation_days table
with the following rules:

id: use the random() sqlite function
instructor_id: copy the id of the instructor
days: for any instructor with a salary less than 70000,
give them 12 days. for any instructor with a salary between 70000
and 89999, give them 8 days. for any instructor with a salary of 90000
or higher, give them 4 days
*/


INSERT INTO vacation_days
SELECT
random(), -- id column
ID, -- instructor_id column
12 -- vacation_days column
FROM instructor
WHERE salary < 70000;


INSERT INTO vacation_days
SELECT
random(), -- id column
ID, -- instructor_id column
8 -- vacation_days column
FROM instructor
WHERE salary >= 70000 AND salary <= 89999;

INSERT INTO vacation_days
SELECT
random(), -- id column
ID, -- instructor_id column
4 -- vacation_days column
FROM instructor
WHERE salary > 90000;

SELECT * FROM vacation_days;

SELECT dept_name, sum(days) as total_vacation_days FROM department
NATURAL JOIN instructor
JOIN vacation_days
ON vacation_days.instructor_id = instructor.ID
GROUP BY dept_name
ORDER BY total_vacation_days DESC;
```
