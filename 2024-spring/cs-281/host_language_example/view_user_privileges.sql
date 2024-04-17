-- table level
SELECT 
    grantee,
    table_schema,
    table_name,
    privilege_type
FROM 
    information_schema.table_privileges
WHERE 
    grantee = 'reporter_1';

-- column level

SELECT 
    grantee,
    table_schema,
    table_name,
    column_name,
    privilege_type
FROM 
    information_schema.column_privileges
WHERE 
    grantee = 'reporter_1';
