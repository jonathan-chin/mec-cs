const generate_employee = (name) => {
    return {
	name,
	account_balance: 0,
	jobs: []
    };
}

const generate_job = (account_balance) => {
    return {
	account_balance
    };
}

const add_job = (employee, job) => {
    return Object.assign(
	{},
	employee,
	{
	    // for a fp approach to array.push, instead use a new array object []
	    // and the spread operator on the original array you want to add to
	    jobs: [...employee.jobs, job]
	}
    );
}

const deduct_account_balance = (job) => {
    return Object.assign(
	{},
	job,
	{
	    account_balance: job.account_balance - 500
	}
    );
}

const account_balance_is_positive = (job) => {
    return job.account_balance > 0;
}

const say = (employee) => {
    console.log(employee);
}

const Barry = generate_employee('Barry');
const job1 = generate_job(1000);
const job2 = generate_job(2000);

// example of function composition
const Barry_with_jobs = add_job(
    add_job(Barry, job1),
    job2
);

const pay_until_all_empty = (employee) => {
    // see if employee has any jobs with available funds
    if(employee.jobs.length === 0){
	return employee;
    }
    say(employee);
    return pay_until_all_empty(
	Object.assign(
	    {},
	    employee,
	    {
		account_balance: employee.account_balance + 500 * employee.jobs.length,
		jobs: employee.jobs
			      .map(deduct_account_balance)
			      .filter(account_balance_is_positive)
	    }
	)
    );
}

const Barry_after_paid = pay_until_all_empty(Barry_with_jobs);
say(Barry_after_paid);

