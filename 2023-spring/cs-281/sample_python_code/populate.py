import psycopg2;
from dotenv import load_dotenv;
import os;

load_dotenv();

connection = psycopg2.connect(
    database=os.getenv('POSTGRES_DATABASE'),
    user=os.getenv('POSTGRES_USERNAME'),
    password=os.getenv('POSTGRES_PASSWORD'),
    host=os.getenv('POSTGRES_HOST'),
    port=os.getenv('POSTGRES_PORT')
);

cursor = connection.cursor();

# ask user for new info
print("Player Insert Tool");
new_name = input("What is the new player's name?");
new_country = input("Where is the new player from?");
new_id = new_name[:3] + new_country[:3];
cursor.execute(f"INSERT INTO players VALUES('{new_id}', '{new_name}', '{new_country}')");
# don't forget to commit!
connection.commit();


cursor.execute("""SELECT * FROM players""");
players = cursor.fetchall();
print(players);

cursor.close();
connection.close();
