/*
const grades = [92, 99, 86, 94, 65];
const reducer = (running_total, current_value) => {
	return running_total + current_value;
};
const total_grades = grades.reduce(
	reducer, // function to determine intermediate value
	0 // starting intermediate value
);


console.log(grades);
console.log(total_grades);
*/



// HOFs
/*
const paint_door = (door, color) => {
    // assume door is an object with a color property
    return {
	...door,
	color: color
    };
};


// let's curry it
const paint_door_red = () => {
    return (door) => {
	paint_door(door, 'red');
    };
};
*/








































// let's say we're running a dog shelter with X number of different dogs
// we have to feed them

const dogs = [1, 1, 1, 1, 1]; // represent dogs by the number of lbs of food they eat per day

// calculate total lbs needed in one day

// imperative programming (for loop);
let total_imperative = 0;
for(x of dogs){
    total_imperative = x + total_imperative;
}

console.log(total_imperative);

// functional programming (reduce);

const reducer = (total, current_dog) => {
    return total + current_dog;
}

const total_fp = dogs.reduce(
    reducer,
    0
);

console.log(total_fp);


















const get_random_integer = (
    min,
    max
) => {
    const random_decimal = Math.random();
    return (Math.floor(random_decimal)
	% (max - min)) // will return between 0 and interval between min and max
	 + min // will shift all numbers up
}

const get_dog = () => {
    const lbs_food_needed = get_random_integer(1, 5); // smallest dog eats 1 lb, largest 5 lb
    return {
	
    }
}
