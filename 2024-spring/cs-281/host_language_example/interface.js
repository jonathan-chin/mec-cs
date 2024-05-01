const {Client} = require('pg');
require('dotenv').config();
const fs = require('fs');
const prompt = require('prompt-sync')();

const username = prompt('login with username: ');
const password = prompt('login with password: ');

const client = new Client({
    user: username,
    host: process.env.PG_HOST,
    database: process.env.PG_DATABASE,
    password: password,
    port: process.env.PG_PORT,
    ssl: true
});

client.connect((error) => {
    if(error){
        console.log(error);
    }
});

const run = async () => {
    
    let input;
    let sql;

    do{
	input = prompt('type in the name of the sql file you want to run or exit to stop: ');
	if(input === 'exit'){
	    break;
	}
	try{
	    sql = fs.readFileSync(`./${input}.sql`).toString();
	    
	    const response = await client.query(sql);
	    const results = Array.isArray(response) ? response : [response]; // coerce to array
	    for(const result of results){
		for(const row of result.rows){
		    console.log(row);
		}
	    }
	}catch(error){
	    // usually file not found?
	    console.log(error.toString());
	}
    }while(input !== 'exit');

    client.end();
};

run();
