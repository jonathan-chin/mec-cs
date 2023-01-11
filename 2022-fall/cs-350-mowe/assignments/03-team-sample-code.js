const generate_entity = (funds) => {
    return {
	funds
    };
}

const generate_employee = (funds) => {
    return {
	...generate_entity(funds),
	bonuses: 0
    }
}


const person_a = generate_employee(0);
const person_b = generate_employee(0);
const person_c = generate_employee(0);

const team = [person_a, person_b, person_c];

const company = generate_entity(1000);

const pay = (entity, amount) => {
    return {
	...entity,
	funds: entity.funds + amount
    };
}

const pay_normal = (entity) => {
    return pay(entity, 100);
};

const pay_bonus = (entity) => {
    return {
	...pay(entity, 200),
	bonuses: entity.bonuses + 1
    };
}

const announce_state = (team, company) => {
    console.log('---');
    console.log(team);
    console.log(company);
}

const get_random_index = (max) => {
    // assume lowest is 0
    // and highest is max - 1
    // since this will be used to index into an array
    return Math.floor(
	Math.random() * max
    );
}

const extract_from_array = (array, index) => {
    // get left of index
    const left_of_index = index === 0 ? [] : array.slice(0, index - 1);
    const right_of_index = index === array.length ? [] : array.slice(index + 1);
    const leftover_array = [...left_of_index, ...right_of_index];
    return [left_of_index, array[index], right_of_index];
}

const pay_team = (team) => {
    // select random team member as primary
    // this person gets a bonus!
    const random_index = get_random_index(team.length - 1);

    const [left_of_primary, primary_team_member, right_of_primary] = extract_from_array(team, random_index);
    const new_left_of_primary = left_of_primary.map(pay_normal);
    const new_right_of_primary = right_of_primary.map(pay_normal);
    const new_primary_team_member = pay_bonus(primary_team_member);

    // reconstruct team array
    const new_team = [...new_left_of_primary, new_primary_team_member, ...new_right_of_primary];
    return new_team;
}

const simulation = (team, company) => {
    //announce_state(team, company);
    if(company.funds <= 0){
	return;
    }

    console.log(team);
    const new_team = pay_team(team);
    console.log(new_team);
    const new_company = pay(company, -100 * team.length - 100);
    simulation(new_team, new_company);
}

simulation(team, company);
