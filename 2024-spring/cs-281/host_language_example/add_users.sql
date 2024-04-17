CREATE USER reporter_1 WITH PASSWORD 'hello_world';

GRANT SELECT ON city TO reporter_1;
GRANT SELECT (name, primary_color) ON team to reporter_1;
