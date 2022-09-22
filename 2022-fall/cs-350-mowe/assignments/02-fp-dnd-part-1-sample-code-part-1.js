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

/*
const deduct_company = (company, amount) => {

}
*/

const simulation = () => {
    const Abe = generate_person('Abe', 'IT Support');
    console.log(Abe);

    // this is where recursion comes in
    // will help us not need to create new variables each time
    const Abe_paycheck_1 = pay_employee(Abe, 1000);
    console.log(Abe_paycheck_1);
    
    /*
    const Apple = generate_company('Apple', 9999999);
    console.log(Apple);
    */
};

simulation();
