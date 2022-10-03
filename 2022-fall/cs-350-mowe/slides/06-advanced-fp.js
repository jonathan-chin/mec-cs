// array pop in functional programming

const rainbow = ['red', 'orange', 'yellow'];

// regular way but produces side effects
//const last_color = rainbow.pop();
//console.log(last_color);
//console.log(rainbow);


// functional programming way
const pop = rainbow[rainbow.length - 1];
const popped_rainbow = structuredClone(rainbow).slice(0, rainbow.length - 1);

console.log(pop);
console.log(popped_rainbow);
console.log(rainbow);
