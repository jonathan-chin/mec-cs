# Final Project Requirements

- 1 sql file that has all of your table definitions, constraints, views, users, etc. comments here are encouraged.

- 1 sample `.env` file named `example.env` that has the structure of your real `.env` file. I should be able to just edit this file to include my credentials, rename it to `.env` and run.

- all python files that connect to the server must use a `.env` file for server credentials. I will create my own `.env` file based on your `example.env` file.

- 1 python file named `populate.py` that will be used to add the initial data to the database. it must read from `csv` files and insert that info into your database.

- at least 1 `csv` file containing the initial data for your database. you'll need 1 `csv` file for each table in your database. include at least 5 rows for each table.

- 1 python file named `delete.py` that deletes at least 1 row from the database. you can prompt the user for which row they want to delete (perhaps limited to a single table).

- 1 python file named `add.py` that adds 1 row to the database. you must prompt the user for the info to be inserted.

- 1 python file named `edit.py` that will edit 1 row in the database. you must prompt the user for all the necessary info to be edited.

- 1 python file named `restricted_allowed.py` that prompt the user for a username and password, then make a `SELECT` call to the database that is allowed for that user. the credentials for this restricted user should be defined in your `sql file`

- 1 python file named `restricted_denied.py` that prompt the user for a username and password, then make a `SELECT` call to the database that is *not* allowed for that user. the credentials for this restricted user should be defined in your `sql file`

- 1 `png` file that is an ERD automatically generated from pgadmin

in total:
- 1 `sql` file
- 1 `example.env` file
- 1 directory with many `csv` files
- 6 `python` files
- 1 `png` file

* note: you can have other `python` files such as `reset.py` included as well, if you want to.
