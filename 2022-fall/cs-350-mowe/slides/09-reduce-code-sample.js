// generate a list of dogs of random sizes
// size = number of lbs of food they eat per day
// caveat: our shelter has a limited amount of food


const get_random_integer = (min, max) => {
    const random_decimal = Math.random(); // returns a decimal between 0 and 1
    return Math.floor(
	random_decimal * (max - min) // use difference rather than max to account for higher floor
	+ min // assure a min value
    );
}

const get_dogs_helper = (total, array) => {
    if(total <= 0){
	// base case, done with counting
	return array;
    }
    return get_dogs_helper(
	total - 1,
	[...array, get_random_integer(1, 5)]
    );
}

const get_dogs = (total) => {
    return get_dogs_helper(total, []);
}

const say = (message) => {
    console.log(message);
};

const reducer = (total, current_value) => {
    return total + current_value;
};

const main = () => {
    const dogs = get_dogs(5);
    const shelter_supply = 8;

    // generate list of anonymous functions that change / alter a main object

    const dog_reducers = dogs.map(
	(dog_size) => {
	    return (shelter) => { // an "eat" function
		return shelter - dog_size;
	    }
	}
    );

    say(dogs);
    say(dog_reducers);

    const new_shelter_state = dog_reducers.reduce(
	(state, func, current_index) => {
	    const [food_left, dogs_skipped] = state;
	    
	    // edge case check if we can't feed this particular dog
	    const new_total = func(food_left);
	    if(new_total >= 0){
		return [
		    new_total,
		    dogs_skipped
		];
		
	    }else{
		// effectively skip over this dog
		say(`skipping over a ${dogs[current_index]}lb dog`);
		const skipped_dog = dogs[current_index]; // impure! this relies on a variable outside of the function scope
		// todo: refactor to include full dog object: size and reducer function
		return [
		    food_left,
		    [...dogs_skipped, skipped_dog]
		];
	    }
	},
	// use array to track multiple variables
	[shelter_supply, []] // could have used a object instead
    )

    say(`Before feeding: ${shelter_supply}`);
    say(`After feeding: ${JSON.stringify(new_shelter_state)}`); // need to use JSON.stringify because console.log doesn't accurately represent nested arrays
};

main();
