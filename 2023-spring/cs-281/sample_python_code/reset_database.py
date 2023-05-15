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

# order matters!
cursor.execute("DELETE FROM matches");
cursor.execute("DELETE FROM private_player_contact_info");
cursor.execute("DELETE FROM players");

connection.commit();
cursor.close();
connection.close();

