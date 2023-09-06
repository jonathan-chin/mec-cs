# 02 Functions and Arrays Review

## Purpose

To practice using functions and arrays in C++.

## Task

You just started in a fantasy basketball league! You are excited but want to make sure you make the best draft decisions. You are deciding between 2 players and want to see how they stack up.

1. Create a function that takes a size number argument. It should create an array of ints of that size. Use a random number generator to fill that array with a number between 0 and 50. This represents a player's points scored for the last X games, where X is the argument passed.

2. Call that function twice to generate 2 arrays of scores, one for each player. Use 10 for the size argument. You can name the players whatever you want.

3. Create a function that takes an array and a size number as arguments. This function will return the average of that array.

4. Call that function with the score arrays for each player and store those in variables.

5. Print out both players' scores, their average points per game, and which player would make the better choice.

## HINT

To generate a random number in C++, you will need the srand() and rand() functions from the `cstdlib` library. You may also need the `time` library to provide a random seed number. You can follow [this tutorial](https://www.digitalocean.com/community/tutorials/random-number-generator-c-plus-plus) on Digital Ocean to see how to do this.

## Expected Output

Horford's last 10 games:
37 21 10 40 11 1 28 2 32 18
Thornwell's last 10 games:
17 2 28 48 12 20 15 16 0 26
Horford's average points per game:
20
Thornwell's average points per game:
18.4
Horford is a better pick!

## Submission

Please submit a `.cpp` file on Blackboard
