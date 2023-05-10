import psycopg2;
from dotenv import load_dotenv;
import os;
import csv;

load_dotenv();

connection = psycopg2.connect(
    database=os.getenv('POSTGRES_DATABASE'),
    user=os.getenv('POSTGRES_USERNAME'),
    password=os.getenv('POSTGRES_PASSWORD'),
    host=os.getenv('POSTGRES_HOST'),
    port=os.getenv('POSTGRES_PORT')
);

cursor = connection.cursor();

cursor.execute("SELECT * FROM players");
players = cursor.fetchall();
print(players);

with open('data.csv', newline='') as csvfile:
    data_reader = csv.DictReader(csvfile);
    for row in data_reader:
        cursor.execute(f"""INSERT INTO
        players VALUES(
        '{row['id']}',
        '{row['name']}',
        '{row['country']}'
        )""");
    connection.commit();

cursor.execute("SELECT * FROM players");
players = cursor.fetchall();
print(players);

cursor.close();
connection.close();
