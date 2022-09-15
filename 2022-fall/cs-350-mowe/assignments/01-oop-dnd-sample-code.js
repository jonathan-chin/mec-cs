class Car {
    #wheels_need_replacing;

    constructor(wheels_need_replacing){
	this.wheels_need_replacing = wheels_need_replacing;
    }

    get_wheels_need_replacing(){
	return this.wheels_need_replacing;
    }

    fix_wheels(number_of_wheels_to_fix){
	this.wheels_need_replacing -= number_of_wheels_to_fix;
    }
    
}

class Mechanic {

    // Mechanic doesn't need to track any variables
    // so have empty constructor
    constructor(){}

    // no need for constructor
    
    fix_car(car){
	// asks car for number of wheels needing replacing
	// then updates that value
	
	// assume that car is of class Car
	const number_of_wheels_needing_fixing = car.get_wheels_need_replacing();
	car.fix_wheels(number_of_wheels_needing_fixing);
    }
}


const my_car = new Car(4);
const my_mechanic = new Mechanic();

my_mechanic.fix_car(my_car);

console.log(my_car);
