const simple_object = {
    prop_1: true,
    prop_2: true
};

console.log(simple_object);

const complex_object = {
    prop_1: {
	prop_a: false,
	prop_b: [3, 4, 6, 7],
	prop_c: {
	    name: {
		abc: 'def'
	    },
	    country: 'us'
	}
    },
    prop_2: true
};


console.log(complex_object);
console.table(complex_object);
console.log(
    JSON.stringify( // converts JSON to string
	complex_object,
	null,
	4
    )
);
