// impure function

const person = {
    first_name: 'Vernon',
    last_name: 'Williams'
};

/*
function add_full_name_impure(person){
    person.full_name = `${person.first_name} ${person.last_name}`; // uses string composition
    return person;
}
*/

function add_full_name_pure(person){
    // because this function returns a new object
    // and uses the spread operator to copy values from the input
    // it does not create any side effects
    return {
	...person, // uses spread operator to keep original properties
	full_name: `${person.first_name} ${person.last_name}`
    }
}

/*
const modified_person = add_full_name_impure(person);
console.log(modified_person);
console.log(person); // this person has a full_name because it was modified in the impure function
*/

const modified_person = add_full_name_pure(person);
console.log(modified_person);
console.log(person);



/*
   pure function does not modify its inputs or anything outside of its scope
   and also does not rely on variables outside of its scope
*/
