# Practice C++ Problems

## Min and Max Temperatures

Ask the user for 5 days worth of temperatures. Then, print out the min and max temperatures. You should use at least 1 array and 2 for loops.

## Fibonacci Sequence

In math, a Fibonacci Sequence is a special list of numbers that follow a particular pattern: any number is the sum of the two previous numbers in the list. A true Fibonacci Sequence starts with the same two numbers: 1, 1. Here is an example:

1 1 2 3 5 8 13 21 34 55

Write a C++ program that asks users for a number of elements they want to see. This number must be >= 2. Then, ask the user for the first 2 numbers that they want their sequence to start with. Fill out the rest of the array according to the Fibonnacci Sequence rules and print it out.

You should use at least 1 array and 3 for loops.

## Grading on a Curve

There are many strategies to help students achieve a respectable final grade by dropping or replacing some of the lowest grades.

Write a C++ program that asks a user to enter in 7 grades with values between 0-100. Then, replace the lowest grade with a 100. Finally, print out the user's average grade with this new set of scores.

You should use at least 3 for loops and at least 1 array.

## Name Registry

There are some common practices among some cultures that can lead to people having very long or very short names. Some cultures only have a first and last name. Some can have 4: first name, middle name, mother's maiden name, and father's last name.

Write a C++ program that asks the user to enter their full name, one section at a time. At most, they should be able to enter 4. If at any time they have no more names to enter, they can type "done". Finally, print out all of the names they entered in the order you received them.

You should use at least 1 array, at least 1 for loop, and potentially 1 or more while loops.


## Paycheck Calculator

You are building an interface to help an hourly wage worker determine their total gross pay for a given time period.

Usually, a worker is paid at their normal rate for every hour during the first 40 hours of a week. For every hour above 40 in a given week, they get a bonus. For example:

base hourly pay: 10
overtime multiplier: 1.5
hours in week 1: 30
pay in week 1: 300
hours in week 2: 50
pay in week 2: 450 (300 + 150)

Write a C++ program that asks the user how many weeks are in their pay period. Then, ask them what their base hourly pay is and what their overtime multiplier is. Then for each week in their pay period, print out: total regular pay, total overtime pay, and total gross pay. Here's an example output:

How many weeks did you work? 4  
What is your base hourly pay? 8  
what is your overtime multiplier? 1.5  
how many hours did you work in week 1? 20  
how many hours did you work in week 2? 45  
how many hours did you work in week 3? 40  
how many hours did you work in week 4? 50  

| week | total regular pay | total overtime pay | total gross pay |
|---|---|---|---|
|1 | 160 | 0 | 160|
|2 | 320 | 60 | 380|
|3 | 320 | 0 | 320|
|4 | 320 | 120 | 440|

You should use at least 2 arrays and 2 for loops.
