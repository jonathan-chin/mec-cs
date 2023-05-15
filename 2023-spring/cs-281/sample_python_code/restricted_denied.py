import psycopg2;
from dotenv import load_dotenv;
import os;

load_dotenv();

connection = psycopg2.connect(
    database=os.getenv('POSTGRES_DATABASE'),
    user=os.getenv('POSTGRES_RESTRICTED_USERNAME'),
    password=os.getenv('POSTGRES_RESTRICTED_PASSWORD'),
    host=os.getenv('POSTGRES_HOST'),
    port=os.getenv('POSTGRES_PORT')
);

cursor = connection.cursor();

cursor.execute("""SELECT * FROM matches""");
matches = cursor.fetchall();
print(matches);

cursor.close();
connection.close();
