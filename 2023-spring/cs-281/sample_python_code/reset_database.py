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

# discard any previous changes
cursor.execute("""
DELETE FROM matches;
DELETE FROM private_player_contact_info;
DELETE FROM players""");
connection.commit();

# load player contact info


with open('data/players.csv', newline='') as csvfile:
    data_reader = csv.DictReader(csvfile);
    for row in data_reader:
        cursor.execute(f"""INSERT INTO
        players VALUES(
        '{row['id']}',
        '{row['name']}',
        '{row['country']}'
        )""");
    connection.commit();

with open('data/private_player_contact_info.csv', newline='') as csvfile:
    data_reader = csv.DictReader(csvfile);
    for row in data_reader:
        cursor.execute(f"""INSERT INTO
        private_player_contact_info VALUES(
        '{row['email_address']}',
        '{row['id']}',
        '{row['is_over_18']}'
        )""");
    connection.commit();
    
with open('data/matches.csv', newline='') as csvfile:
    data_reader = csv.DictReader(csvfile);
    for row in data_reader:
        cursor.execute(f"""INSERT INTO
        matches VALUES(
        '{row['which_won']}',
        '{row['stage']}',
        '{row['player_1_character']}',
        '{row['player_1_id']}',
        '{row['player_2_character']}',
        '{row['player_2_id']}',
        '{row['which_loss']}',
        '{row['duration']}',
        '{row['out_of_bounds']}',
        '{row['id']}',
        '{row['bracket']}'
        )""");
    connection.commit();

cursor.close();
connection.close();
