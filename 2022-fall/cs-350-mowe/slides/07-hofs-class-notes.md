# questions on HOF example

## How to concatenate two strings with space in javascript?

technique called `string composition` 
```
// string composition example
const first_name = 'Amber';
const last_name = 'Smith';

const old_way_full_name = first_name + ' ' + last_name;
const full_name = `${first_name} ${last_name}`;
```

## Is the ternary operator a conditional like the if statement or switch statement? 
conditional ? :
this is basically an if/else statement;

conditional_1 ? (conditional_2 ? response_1 : response_2) : response_3;

## Is an HOF only referred to as such when it is used as one or when it can be used as one, for example in the code the get_vip_badge function takes   in a string, text, as an input and is later used in a composition in the print_vip_badge function with get_formal_name. If we were to instead skip using get_formal_name as an input is the get_vip-badge function then not an HOF?

HOF does one or more of the following
- at least one input is a function
- returns function

## Since the spread operator iterates through an array are there any key differences to Pythons enumerate function?

answer TBD

## Line 16- how can a empty string produce an error?

## line 51 -54 why isn't it consider chaining if its using more than one function? 


## You created a variable and called it print. Why create one when console.log already exist?

no efficiency gains  
no clarity gains  
mostly as an example of functions as first class variables

## Can we nest a function using the fat arrow notation twice?

technically yes. maybe readability will suffer.  
const function = () => () => answer;
