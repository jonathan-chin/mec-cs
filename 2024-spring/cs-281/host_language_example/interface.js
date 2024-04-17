const {Client} = require('pg');
require('dotenv').config();
const fs = require('fs');
const prompt = require('prompt-sync')();


const client = new Client({
    user: process.env.PG_USER,
    host: process.env.PG_HOST,
    database: process.env.PG_DATABASE,
    password: process.env.PG_PASSWORD,
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
