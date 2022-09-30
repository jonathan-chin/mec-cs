// 07 - HOFs
// 2022-09-29

const print = console.log; // just use the console.log function directly

const get_title = (person) => {
	if(person.has_phd){
		return 'Dr.';
	}
	switch(person.gender){
		case 'male':
			return 'Mr.';
		case 'female':
			return 'Ms.'; // assume Mrs doesn't exist
		default:
			return ''; // might produce error with trailing space
	}
}

const get_vip_badge = (text) => {
	return `########
## ${text}
########`;
}

const get_badge = (text) => {
	return `--------
-- ${text}
--------`;
}

const get_formal_name = (person) => {
	return `${get_title(person)} ${person.last_name}`;
}

const get_name = (person) => {
	return `${person.first_name} ${person.last_name}`;
}

const print_regular_badge = () => {
	return (person) => {
		return print( // function composition but no chaining
			get_badge(
				get_name(person)
			)
		);
	}
}

const print_vip_badge = () => {
	return (person) => {
		return print( // function composition but no chaining
			get_vip_badge(
				get_formal_name(person)
			)
		);
	}
}

const people = [
	{
		first_name: 'Tercia',
		last_name: 'Anneli',
		is_doctor: false,
		gender: 'female',
		is_vip: true
	},
	{
		first_name: 'Clara',
		last_name: 'Dragisa',
		is_doctor: true,
		gender: 'female',
		is_vip: true
	},
	{
		first_name: 'Runa',
		last_name: 'Chiemeka',
		is_doctor: false,
		gender: 'male',
		is_vip: false
	}
];

people.map((person) => {
    const print_badge = person.is_vip ? print_vip_badge() : print_regular_badge();
    print_badge(person);
});
