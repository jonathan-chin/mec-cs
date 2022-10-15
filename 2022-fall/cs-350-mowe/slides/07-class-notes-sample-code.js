// named functions and composition

const f = (x) => {
    return x * 2;
}

const g = (x) => {
    return x * -1;
}

const answer = f( g( 4 ) );
console.log(answer);

const nested_double_arrow = (x) => (x * 2) => (x * -1);
const answer_2 = nested_double_arrow(4);
console.log(answer_2);

