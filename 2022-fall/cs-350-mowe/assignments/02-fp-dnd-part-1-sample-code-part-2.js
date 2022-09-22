// FP code that allows companies to pay employees

const generate_person = (name, position) => {
    return {
	name: name,
	position: position,
	account_balance: 0
    };
};

const generate_company = (name, funds) => {
    return {
	name: name,
	account_balance: funds
    };
}

const pay_employee = (person, amount) => {

    // you will probably need this code pattern for the assignment
    return Object.assign(
	{},
	person,
	{
	    account_balance: person.account_balance + amount
	}
    );
    
    /*
    // this works but is not optimal
    return {
	name: person.name,
	position: person.position,
	account_balance: person.account_balance + amount
    };
    */
};


const deduct_from_company = (company, amount) => {
    return Object.assign(
	{},
	company,
	{
	    account_balance: company.account_balance - amount
	}
    );
}


// if using intermediate values strategy
/*
const simulation = () => {
    const Abe = generate_person('Abe', 'IT Support');
    console.log(Abe);

    // this is where recursion comes in
    // will help us not need to create new variables each time
    const Abe_paycheck_1 = pay_employee(Abe, 1000);
    console.log(Abe_paycheck_1);

    const Abe_paycheck_2 = pay_employee(Abe_paycheck_1, 1000);
    
    
    //const Apple = generate_company('Apple', 9999999);
    //console.log(Apple);
    
};

simulation();
*/

const say = (
    employee,
    company
) => {
    console.log(employee);
    console.log(company);
    console.log('-----');
}

const pay_until_empty = (
    employee,
    company
) => {
    if(company.account_balance == 0){
	return;
    }

    say(employee, company);
    return pay_until_empty(
	pay_employee(employee, 1000),
	deduct_from_company(company, 1000)
    );
}

const Abe = generate_person('Abe', 'IT Support');
const Apple = generate_company('Apple', 10000);

pay_until_empty(Abe, Apple);
