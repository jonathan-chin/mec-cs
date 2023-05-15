-- table definitions etc go here


-- create a user with restricted permissions

CREATE USER restricted_user WITH PASSWORD 'abc123';
-- by default, a new user doesn't get any permissions
-- so need to explicitly grant them one at a time
GRANT SELECT ON players TO restricted_user;
