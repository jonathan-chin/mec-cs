# 06 Look Away

## Purpose

In this phase of our course, we will be revisiting functional programming concepts in Python 3

## Background

The popular video game `Mario Party 2` has a minigame called `Look Away`. It is a 1v3 game where 3 players (the `blue` team) are against 1 player (the `red` team). It consists of 5 rounds where, in each round all players look in a specific direction: `up`, `down`, `left`, or `right`. Anyone one the `blue` team that matches the player on the `red` team gets an `X`.

At any point if all players on the `blue` team have an `X`, the game ends and the `red` team wins. If after 5 rounds there is at least 1 `blue` team player without an `X`, the `blue` team wins!

## Task

Using Python 3, write a series of `pure` and `impure` functions that accomplishes the following:

- Generates a `Player` dictionary that tracks the player's history of looks (eg `['up', 'up', 'down']`)
- Generates a `Game State` dictionary that tracks the `blue` team with 3 `Players` and the `red` team with 1 `Player`
- Allows a `Player` to look somewhere. This will get added to their history and is chosen at pure random.
- Runs one round. Any players on the `blue` team that match the look as the `Player` on the `red` team should get an `X`
- Runs until all `blue` team `Players` have at least 1 `X` or until 5 rounds have passed
- Announces the final `game state`: which team won, the move history for each player, and how many `X`s they received

This should exemplify the functional programming concepts we've been reviewing!
