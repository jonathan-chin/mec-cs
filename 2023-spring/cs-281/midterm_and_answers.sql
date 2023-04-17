/*
1. Add a new column to the takes table named grade_points that is a numeric.
*/

ALTER TABLE takes
ADD COLUMN grade_points numeric;

/*
2. For each record in the takes column, set grade_points based on the following table:

A = 4
A- = 3.67
B+ = 3.33
B = 3
B- = 2.67
C+ = 2.33
C = 2
C- = 1.67
F = 0
no grade = 0  

*/

UPDATE takes SET grade_points =
CASE
WHEN grade = "A" THEN 4
WHEN grade = "A-" THEN 3.67
WHEN grade = "B+" THEN 3.33
WHEN grade = "B" THEN 3
WHEN grade = "B-" THEN 2.67
WHEN grade = "C+" THEN 2.33
WHEN grade = "C" THEN 2
WHEN grade = "C-" THEN 1.67
ELSE 0
END;

/*
3. For every student with at least 1 matching record in the takes column, show their average grade points (usually called GPA) in order from highest GPA to lowest GPA. The minimum columns you need to show are the student’s name and their GPA.
*/

SELECT name, AVG(grade_points) as GPA
FROM student
NATURAL JOIN
takes
GROUP BY
name
ORDER BY
GPA
DESC;


/*
4. For each department, show the average GPA of all their students in order from highest GPA to lowest GPA. The minimum columns you need to show are dept_name and GPA.
*/

SELECT dept_name, AVG(grade_points) as GPA
FROM student
NATURAL JOIN
takes
GROUP BY
dept_name
ORDER BY
GPA
DESC;

SELECT dept_name, AVG(GPA) as all_students_GPA
FROM
(SELECT name, dept_name, AVG(grade_points) as GPA
FROM student
NATURAL JOIN takes
GROUP BY name)
GROUP BY
dept_name
;



/*
5. Make a new table named teaching_assistants with the following columns:

id as numeric and primary key
dept_name as text and foreign key referencing the department table
*/

CREATE TABLE
teaching_assistants
(
id number,
dept_name text,
primary key (id),
foreign key (dept_name) references department  
);

/*
6. For each section, insert a record into the teaching_assistants table using random() for the id and keeping the dept_name. You must use a nested subquery
*/

INSERT INTO
teaching_assistants
SELECT
random(), dept_name
FROM section
NATURAL JOIN
course;

/*
7. Remove any records in the teaching_assistants table where the id column is a negative number. NOTE: you may have zero records to remove but write the SQL statement that would work anyway.
*/

DELETE FROM teaching_assistants
WHERE id < 0;

/*
8. Show all departments that have at least 2 teaching_assistants. The minimum columns you need to show are dept_name and num_teaching_assistants; you'll need to use a column rename
*/
SELECT dept_name, COUNT() as num_teaching_assistants FROM
teaching_assistants
GROUP BY
dept_name
HAVING
num_teaching_assistants >= 2;
