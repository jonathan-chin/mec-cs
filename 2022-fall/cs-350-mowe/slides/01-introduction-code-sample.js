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
    constructor(name){
	this.name = name;
    }
}

class Company{
    name;
    employees = [];
    funds = 1000000;
    constructor(name){
	this.name = name;
    }
}

// can use `new` to instantiate a class
const Jon = new Employee('Jon');
const ShareMeals = new Company('Share Meals');
console.log(ShareMeals.employees);
ShareMeals.employees.push(Jon);
console.log(ShareMeals.employees);


// destructuring will not produce a side effect
let {account_balance} = Jon;
account_balance += 100;
console.log(Jon.account_balance);

function pay(who){
    who.account_balance += 100;
}

pay(Jon);
console.log(Jon.account_balance);
