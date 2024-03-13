SELECT statements

returns records that satisfy the constraints

example
SELECT * FROM student;
technicaly no constraints, grab all

SELECT * FROM student WHERE name > "J";

SELECT * FROM instructor
	WHERE dept_name = "Physics"
		AND salary > 90000
		
SELECT ID, name FROM instructor;

JOIN operations make tables wider

UNION operations make tables longer

RENAME operation

SELECT name AS student_name FROM student;





REVIEW

select - SELECT * FROM student;

project - SELECT name FROM student;

union - execute 2 or more statements and return single, combined result

SELECT * FROM student WHERE tot_cred < 30
UNION
SELECT * FROM student WHERE tot_cred > 70;

SELECT * FROM student WHERE tot_cred < 30 OR tot_cred > 70;

intersect - execute 2 or more statements and return records that only exist in both results.

SELECT * FROM student WHERE dept_name = "Comp. Sci."
INTERSECT
SELECT * FROM student WHERE tot_cred > 70;


set difference - opposite of intersect

cartesian product - return all the combinations of records between both tables;
SELECT * FROM student, instructor;

join operation - execute one statement, then find corresponding records for each result in a second table based on some selection criteria.

SELECT * FROM student JOIN advisor ON student.ID = advisor.s_id;

rename operation - allows us to rename columns
SELECT name AS student_name,
	ID AS student_id,
	dept_name FROM student;
	
	





1. find all classrooms with their capacity that were used in 2017



2. find all the instructors whose salary is more than half of the budget of their department. show the instructor's name and salary along with the department's budget

3. for each student, find their advisor's name and salary.



