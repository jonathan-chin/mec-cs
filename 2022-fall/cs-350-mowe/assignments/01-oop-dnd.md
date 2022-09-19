# 01 OOP DND

## Purpose

This semester, we'll be learning functional programming and how to assess different programming paradigms. In order for us to appreciate the pros and cons of functional programming, we'll rely on our previous knowledge of Object Oriented Programming (OOP) to provide contrast. This assignment will help refresh our memory of it.

## Task

You are to write the classes necessary to play a game of Dungeons and Dragons using OOP. In particular, you need:

- create a `Player` class that has
  - name
  - race
  - gender
  - team of other `Players`
  - hitpoints

- create a `Monster` class that has
  - name
  - race
  - hitpoints

- make sure a `Player` can
  - return their name
  - return their race
  - return their gender
  - return their hitpoints
  - take damage
  - attack a `Monster` for 1 damage
  - team up with other `Players`
  - when a `Player` has no more hitpoints, they cannot take any more actions

- make sure a `Monster` can
  - return their name
  - return their race
  - return their hitpoints
  - take damage
  - attack a `Player` for 2 damage and an additional 1 to each `Player` on their team
  - when the `Monster` has no more hitpoints, it cannot take any more actions

## Simulating a Fight

To test your code, please program the following sequence:

1. Create a `Player` with 10 hitpoints. Other details are up to you.
2. Create a `Player` with 15 hitpoints. Other details are up to you.
3. Create a `Monster` with 35 hitpoints. Other details are up to you.
4. Have both `Players` team up.
5. Console log everyone's details
6. Until the `Monster` is dead or both `Players` are dead:
  1. Have each `Player` attack the `Monster`
  2. Have the `Monster` attack the `Player` and then their team member
  3. Console log everyone's details again

## Requirements

1. This must be written in Javascript / NodeJS
2. This must use OOP
