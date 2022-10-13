# 03 FP DND Part 2

## Purpose

We've familiarized ourselves with the core concepts of functional programming. Now, we want to practice some of the more advanced concepts.

## Task

Write a series of `pure` and `impure` functions that establishes the D&D game engine described below. You can reuse bits of code from your previous `FP DND Part 1` assignment. You should use `FP` concepts like:

- map
- filter
- the spread operator
- destructuring
- curried functions and higher order functions

## Simulating a Fight

- Create `Player A` with 20 hitpoints. Other details are up to you.
- Create `Player B` with 30 hitpoints. Other details are up to you.
- Create `Player C` with 30 hitpoints. Other details are up to you.
- Team up all `Players`.
- Create `Monster A` with 45 hitpoints. Other details are up to you.
- Create `Monster B` with 30 hitpoints. Other details are up to you.
- Until all `Players` or all `Monsters` are dead:
  - Announce the game state.
  - Have each `Players` attack a random `Monster` for 1 hitpoint of damage.
  - Have each `Monster` attack the team, with 2 points of damage for the primary `Player` and 1 for each other `Player`. Choose the primary player at random each time.

## Notes

- As the `Player` team diminishes, you should be using `map`, `filter`, and `spread`.
- You can generalize a damage function that's curried (for 1 or 2 damage). Try it!
- Try to break everything down into as many small functions as possible. For example, you will probably need a separate function to generate a random number.
- Comment your code!

## Due Date

We will set this due at the *end* of our next class, in case there are last minute questions or bugs that you want to review.
