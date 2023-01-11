/*
   race conditions happen when multiple clients / processes are trying to access the same resource
   and it is unpredictable what order they have access
 */

/*
   async and promises
   
 */

// global variable will stand in for our shared database
var count = 0;

const simulate_network_traffic = () => {
    // can also represent low spec devices, latency, user error, etc
    return new Promise((resolve, reject) => {
	setTimeout(resolve,
		   1000 * (Math.random() % 20) // resolve the promise after 0-20 seconds, randomly each time
	);
    });
}

const increment = (value) => {
    return value + 1;
}

const client = () => {
    return new Promise(async (resolve, reject) => {
	await simulate_network_traffic();
	const value_of_count = count; // simulates reading from database
	await simulate_network_traffic(); // some delay between reading the database and writing back
	// data in client can be stale / no longer valid
	count = value_of_count + 1; // simulates writing back to database
	resolve();
    });
}



const main = async() => {
    const clients = [];
    for(let index = 0; index < 1000; index++){
	clients.push(client());
    }

    await Promise.all(clients);
    console.log(`Count is now ${count}`);
    // because of 
    console.log('done');
};

console.log('starting simulation');
main();
