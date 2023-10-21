# Purpose

To practice writing multifile OOP programs in C++

# Task

Create a game where players can challenge each other. When challenging another player, each player generates a random number between 0 - 99. The player with the highest number wins. If both players get the same number, it is a tie.

## Player Class

- should a player ID number (eg: 3 or 17) that is set on instantiation and cannot be changed after
- can generate a random number between 0 - 99
- tracks how many games played, and how many wins / losses / ties
- has a way to increase number of games played and wins / losses / ties
- can print out ID, games played, and number of wins / losses / ties

## Game Class

- should hold an array of up to 64 players
- can add players to the array, needs to track size
- can run 1 round of games by selecting 2 players at random and playing them against each other
- updates the players as they win / lose / tie
- can print out entire state of game (eg: all players)

## Main cpp
- instantiate a game
- add 10 players
- run 500 rounds
- print the state of the game