const generate_company = (name, funds) => {
    return {
	name,
	funds,
	employees: []
    }
};

const pay = (employee, amount) => {
    return Object.assign(
	{},
	employee,
	{
	    funds: employee.funds + amount
	}
    );
}

const pay_junior_developer = (employee) => {
    return pay(employee, 100);
}

const pay_senior_developer = (employee) => {
    return pay(employee, 200);
}

const generate_employee = (name) => {
    return {
	name,
	funds: 0
    };
};

const generate_junior_developer = (name) => {
    return Object.assign(
	{},
	generate_employee(name),
	{
	    position: 'junior'
	}
    );
}

const generate_senior_developer = (name) => {
    return Object.assign(
	{},
	generate_employee(name),
	{
	    position: 'senior'
	}
    );
}

const Microsoft = generate_company("Microsoft", 2000000);

console.log(Microsoft);

const Zeek = generate_junior_developer('Zeek');
console.log(Zeek);
const Zeek_after_pay = pay_junior_developer(Zeek);
console.log(Zeek_after_pay);

const X = generate_senior_developer('X');
console.log(X);
const X_after_pay = pay_senior_developer(X);
console.log(X_after_pay);

Microsoft.employees = [Zeek, X];

const employees_after_pay = Microsoft.employees.map(
    (employee) => {
	switch(employee.position){
	    case 'junior':
		return pay_junior_developer(employee);
	    case 'senior':
		return pay_senior_developer(employee);
	}
    }
);

console.log(employees_after_pay);
