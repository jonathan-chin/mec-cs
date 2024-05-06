# Final Project

## Purpose

To demonstrate a working mastery of all of the major concepts covered in our SQL class, using both programming language and descriptive language

## Task

Think of a real world application where a database may be used. It must be a situation that is different than what we've been studying in class, namely universities, banks, rideshare apps, and sports teams. Design a database management system that will serve at least part of the situation's needs. You must submit SQL files that:

1. Create at least 1 table with a single column primary key and at least 1 table with a multi-column primary key
2. Create enough tables to show at least 1 of each of the following relationships: 1:1, 1:n, m:n
3. Has at least 1 integrity constraint 
4. Create at least 1 view that shows a subsection of columns of one of the tables
5. Populates the tables (ie adds rows)
6. Runs a select statement to get some rows from one of the tables
7. Runs a select statement for each of the relationships that returns data joined by one or more tables
8. Updates some data
9. Deletes some data
10. Runs a select statement for each of the aggregate functions (avg, min, max, sum, and count)
11. Runs a select statement for one aggregate function that uses the GROUP BY clause
12. Runs a statement that tries to violate an integrity constraint
13. Creates a user that has limited access to the DBMS, such as read only access or write access to only some tables
14. Runs a statement that, when run as the limited user, is successful
15. Runs a statement that, when run as the limited user, is denied

Try to have everything make sense in the context of your DBMS. For example, if you are building a banking database, an integrity constraint might be that an account's balance can't be below 0.

For each requirement listed above, write 1-3 sentences explaining what is happening and why you chose to design it this way. You should have 15-45 sentences.

Finally, generate and provide an ERD.

## Submission

When you are ready to submit, please submit all of the following files:

- all of your `.sql` files. do not submit any example `.sql` files that I have provided.
- a file named `README.txt` that has all of your explanatory sentences in them. Please separate them out with numbers and use a generous amount of white space.
- a file named `erd.png` that is the exported ERD file from `pgAdmin`.
- a file named `RUNME.txt` that has the order in which to run your `.sql` files.

Do not submit a `.zip`, `.rar`, or any other archive file. Just submit all of them as individual files.