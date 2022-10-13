// let's say we're running a dog shelter with X number of different dogs
// we have to feed them but

const get_random_integer(
    min,
    max
){
    const random_decimal = Math.random();
    return (Math.floor(random_decimal)
	% (max - min)) // will return between 0 and interval between min and max
	 + min // will shift all numbers up
}

const 

const get_dog = () => {
    const lbs_food_needed = get_random_integer(1, 5); // smallest dog eats 1 lb, largest 5 lb
    return {
	
    }
}
