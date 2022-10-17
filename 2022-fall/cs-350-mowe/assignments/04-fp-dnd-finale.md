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

- Create a randomizer function that returns a `Monster` object
- `Monster` objects have a random hp from 20-30, a name (you can choose one at random from a list), and have a random damage level from 2-4.
- Once a `Monster` object is created, it can only change its hp by decreasing it. That is, the name and damage level should always stay the same.
- Create 1 such `Monster`

- Create a single game state function that returns an object with `Players`, `Monsters`, and any other information you may need (like round number).
- Create functions for the following game functions:
  - `Players` round: each player reduces the `Monster` hp by their damage level
  - `Monster` round: the monster does 2 x their damage level to one `Player` at random and 1 x their damage level to each other `Player`
  - Cleanup round: remove any `Players` that have 0 or less hp
  - Announce round: announce the game state
- Run the previous rounds repeatedly until either no `Players` remain or the `Monster` has 0 or less hp.
