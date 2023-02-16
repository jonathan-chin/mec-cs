# 05 Chapter 3 Lab
## 2023-02-15

---

1. review
2. physical layer isolation explanation
3. Feb 21 class replacement
4. SQL assignment submission format
5. lab

---

# Review
## name one thing you remember from our last class

- relational algebra operations
  - projection - some attributes but not all (maybe)
  - cartesian product - all possible combinations of 2 relations
  - union - all tuples from 2 relations
  - set difference - all tuples that are present in the 1st relation that are not present in the 2nd relation
  - selection - some tuples but not all (maybe)
  - rename - give another way to refer to a attribute / relation

- example of SQL vs NoSQL
  - NoSQL has no enforced relationships
  - can generate inconsistancies
  - good for data that is dirty

  
  
---

# Physical Layer Isolation

- ultimately, code / data needs to live *somewhere*
- hdds, ssds, cpu, ram, etc all affect how it is stored, retrieved, and edited
- file systems also affect it (eg: RAID 0, RAID 1 ... RAID 5, NTFS, EXT, FAT32, exFAT)
- physical layer isolation means that the hardware engineer, the provisioning engineer, and the database engineer can work independently

---

# Feb 21 class replacement

- Feb 21 runs on a Monday schedule
- however, I will not be available
- instead, you'll get an asynchronous assignment **in addition** to regular assignments
- the requirement will be to set up a postgres server on Microsoft Azure; all documentation will be provided

---

# SQL assignment submission format

- assignments so far have been conceptual with no / little coding
- needed to get you up to speed
- assignments moving forward will be all SQL (quizzes will be conceptual)

---

# Sample SQL assignment

```
-- Find the names of all students who have taken at least one Comp. Sci. course; make sure there are no duplicate names in the result.
-- Find the IDs and names of all students who have not taken any course offering before Spring 2009.
-- For each department, find the maximum salary of instructors in that department. You may assume that every department has at least one instructor.
```

---

# Sample SQL assignment submission

```
-- Find the names of all students who have taken at least one Comp. Sci. course; make sure there are no duplicate names in the result.
SELECT DISTINCT name FROM student
NATURAL JOIN takes
NATURAL JOIN section
NATURAL JOIN course
WHERE course.dept_name = "Comp. Sci.";

-- Find the IDs and names of all students who have not taken any course offering before Spring 2009.
SELECT id, name FROM student
NATURAL JOIN takes
WHERE takes.year < 2009; -- assume that Fall 2009 comes after Spring 2009, so no need to check semester

-- For each department, find the maximum salary of instructors in that department. You may assume that every department has at least one instructor.
SELECT max(salary), dept_name FROM instructor
GROUP BY dept_name
```

---

# Lab!
