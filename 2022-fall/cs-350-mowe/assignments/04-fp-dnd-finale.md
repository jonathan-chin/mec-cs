# 04 FP DND Finale

## Purpose

We're going to wrap up all of our knowledge about functional programming in Javascript by extending our D&D engine

## Task

Write a series of `pure` and `impure` functions that extends our D&D game engine as described below. You can reuse bits of code from previous assignments. The core new `FP` concepts we'll be using are:

- reduce
- functions as first class variables
- destructuring to return multiple values

## Engine Extensions

- Create a randomizer function that returns a `Player` object
- `Player` objects have a random hp from 10-20, a name (you can choose one at random from a list), and have a random damage level from 1-3.
- Once a `Player` object is created, it can change only its hp by decreasing it. That is, the name and damage level should always stay the same.
- Create 3 such `Players`. Put them all on a team together (ie an array)
- Create 
