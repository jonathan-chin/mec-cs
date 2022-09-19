// let's create some classes to allow modeling how companies, banks, and employees all interact

class Employee{
    // fields
    // for classes, don't need to declare variables with var / let / const

    // can prepend variable with # to mark as private
    #ssn;
    name;
    position;

    // default value for account_balance field
    account_balance = 0;

    // JS objects have constructors
    // default values in functions can be supplied as well.
    constructor(name, position = 'none', ssn = '123-456'){
	this.name = name;
	this.#ssn = ssn;
	this.position = position;
    }

    add_to_account_balance(amount){
	this.account_balance += amount;
    }
}

class Company{
    name;
    employees = [];
    funds = 1000000;
    constructor(name){
	this.name = name;
    }

    add_employee(person){
	this.employees.push(person);
    }

    get_employees(){
	return this.employees;
    }

    pay_employees(amount_each){

	// need to make sure amount_each is a number
	// typeof will return a string specifing the *primitive datatype*
	// can't distinguish between others like array or object
	if(typeof amount_each !== 'number'){
	    // sample syntax for throwing errors
	    throw new Error('not a number');
	}
	
	/*
	for(let i = 0; i < this.employees.length; i++){
	    this.employees[i].account_balance += amount_each;
	    this.funds -= amount_each;
	}
	*/

	/*

	for(let i = 0; i < this.employees.length; i++){
	    i = 100;
	    this.employees[i].add_to_account_balance(amount_each);
	    this.funds -= amount_each;
	}

	*/
	// whenever possible, set variables to constant
	for(const employee of this.employees){
	    employee.add_to_account_balance(amount_each);
	    this.funds -= amount_each;
	}
	
    }
}

// can use `new` to instantiate a class
const Jon = new Employee('Jon');

const ShareMeals = new Company('Share Meals');
ShareMeals.add_employee(Jon);
console.log(ShareMeals.get_employees());
ShareMeals.pay_employees(100);
console.log(ShareMeals.get_employees());
console.log(ShareMeals.funds);




/*
console.log(ShareMeals.employees);
ShareMeals.employees.push(Jon);
console.log(ShareMeals.employees);

pay(Jon);
console.log(Jon.account_balance);

console.log(ShareMeals.employees);

let {account_balance} = Jon;
account_balance += 100;
console.log(account_balance);
console.log(Jon.account_balance);



function pay(who){
    who.account_balance += 100;
}
*/
