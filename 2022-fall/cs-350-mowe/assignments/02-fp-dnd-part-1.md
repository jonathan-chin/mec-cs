# 02 FP DND Part 1

## Purpose

We're starting to learn the key principles of Functional Programming. By rewriting our previous OOP code in FP, we'll be able to make direct comparisons between the different paradigms.

## Task

We are going to rewrite our DND simulator in sections. For this first section, you should write:

- a function that creates a JS object that represents a `Player`
- a function that creates a JS object that represents a `Monster`
- a function that takes a `Player` or `Monster` object and lowers their hitpoints by a certain amount. **REMEMBER** that `FP` emphasizes `pure` functions and shuns `side effects`
- a function that announces the `game state` (ie everyone's names and hitpoints). **REMEMBER** that you want to separate `pure` and `impure` functions. This will use probably `console.log()`

## Simulating a Fight

We will initially simulate a simpler fight

1. Create a `Player` with 10 hitpoints. Other details are up to you.
2. Create a `Monster` with 35 hitpoints. Other details are up to you.
3. Until the `Player` or `Monster` is dead:
  1. Announce the game state.
  2. Have the `Player` attack the `Monster` for 1 hitpoint of damage.
  3. Have the `Monster` attack the `Player` for 2 hitpoints of damage.
