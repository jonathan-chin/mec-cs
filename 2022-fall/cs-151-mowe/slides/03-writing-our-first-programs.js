let pet = 'dog';

function change_pet(){
  pet = 'cat';
}

change_pet();
//console.log(pet);


// this code below is considered to have a side effect

const sound = 'car honking';

function say_sound(){
    console.log(sound);
}

//say_sound();






const laptop_one = {
	status: 'fine'
};
const laptop_two = laptop_one;
laptop_two.status = 'on fire!';
//console.log(laptop_one.status);

// = is assignment
// == is comparison
// === is strict comparison


// let vs var vs const with objects


const tree = {
    type: 'apple'
};


// to access a field or function within an object, we can use the dot operater
// tree.type accesses the field type in the tree object
tree.type = 'maple';
//console.log(tree);

Object.freeze(tree);
tree.type = 'birch';
//console.log(tree);






const smartphone_one = {
    brand: 'Apple',
    condition: 'good',
    screen_size: 7
};

const smartphone_two = Object.assign({}, smartphone_one);
//const smartphone_two = smartphone_one;
smartphone_two.condition = 'broken';
//console.log(smartphone_one);

const smartphone_three = {
    ...smartphone_one,
    warranty: '1 year'
};

smartphone_three.screen_size = 10;

//console.log('smartphone_one');
//console.log(smartphone_one);

//console.log('smartphone_three');
//console.log(smartphone_three);




const state = {
    capital: 'Albany'
}

const {capital} = state;


//capital = 'Providence'; // this will throw an error

console.log(capital);
