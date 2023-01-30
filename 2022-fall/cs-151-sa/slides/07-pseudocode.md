---
theme: default
paginate: true
---

# 07 - Pseudocode
2022-10-01

---

# Code has to be highly detailed

- As we've seen in the programming assignments we've done already, every little detail counts
- This can make it hard to even start solving a coding task if you're worried too much about the details
- `Pseudocode` let's us focus on the `logic` rather than the `execution`

---

# A Quick Example

```
task: need to find lowest performing month of sales for a business

for each month, get all sales
divide total sales by number of items
this gets the average price per item per month
find the month with the lowest average price

```

---

# Pros of Pseudocode

- not language specific. pseudocode can be used to help `C++`, `Python`, `Javascript` or any other language
- can help identify `gotchas` or `edge cases` easier
- when working on a team, can help explain your ideas faster and easier to fellow engineers
- can be written in any human language (eg English, Spanish, Korean)

---

# Cons of Pseudocode

- doesn't always catch `edge cases`. sometimes, these pop up only when you are coding
- no standards for pseudocode. yours might look radically different than mine.

---

# Another Example

```
task: calculate how many boxes are needed to mail 40 pairs of shoes

get dimensions of one pair of shoes
get dimensions of one box
figure how many pairs of shoes can fit in bottom layer
figure how many layers can fit in one box
this gives number of shoes per box
divide by total shoes

```

---

# Pseudocode can contain real code

- Sometimes, it's actually easier to write real code (or semi-real code) to convey an idea

- Pseudocode can contain a mix of human and programming languages

```
task: pick only healthy plants from an entire garden

for(const plant of garden){
	if plant is green, keep
	otherwise trash
}
```

---

# Translating Pseudocode

- Eventually, pseudocode needs to be translated to actual, runnable code
- Some key phrases are easily translated

---

Can you see how psuedocode maps to the final c++ code?

```
psuedocode
task: print out all even numbers between 1-10

for 1 through 10
	if even, print
	if not even, do nothing
```

```
// C++
#include <iostream>
using namespace std;

int main(){
	for(int number = 1; number <= 100; number++){ // need <= to include 100
		if(number % 2 == 0){ // a number is even if % 2 is 0
			cout << number;
		}
		// else do nothing!
	}
}
```

---

# Practice 1/2

Read through this example of pseudocode and convert them to C++ code

```
task: calculate total price of pizza
ask size of pizza
small = $10
medium = $15
large = $20
ask if mushrooms
	+$1
ask if peppers
	+$1
ask if extra cheese
	+$2
sum up costs
print total cost
```

---

# Practice 2/2

Write pseudocode for the following problem. Once your psuedocode is approved, convert it to c++

```
Write a program that calculates the total cost of a taxi ride.
Taxi rides cost $2.50 to start
They cost $0.50 extra per 1/5 mile
There's an extra $0.50 if the ride is between 8pm and 6am.
There can be a tip.
There is no tax.
```
