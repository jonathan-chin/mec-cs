# 08 Final - Go Fish

## Purpose

We will wrap up all of the skills we've learned about functional programming, while building on the library of card game functions we have

## Background

Go Fish is a simple matching card game. It requires some decision making and memory, but nothing overly complex. This makes it a fan favorite among young children.

## Rules

- Go Fish can be played with 2-4 players and a standard deck of 52 playing cards.
- If there are 2 players, each player starts off with 7 cards.
- If there are 3 players, each player starts off with 6 cards.
- If there are 4 players, each player starts off with 5 cards.
- Players keep their cards hidden at all times.
- Starting with the first player and going around in a circle, each player:
    - Selects a card in their own hand
	- Selects any other player
	- Asks that player if they have any cards of the same rank (eg: "do you have any 3s?" or "do you have any queens?")
	- If the target player has any cards of that rank, they must give them over.
	    - The active player then gets to ask again, from that player or any other player, for that rank or any other rank.
	- If the target player does not have that card, they say, "Go Fish."
	    - The active player draws a card from the deck and ends their turn.
	- If at any time a player gets 4 cards of the same rank (eg four 3s or 4 queens), removes them from the game and put them in their score pile. This is considered one `book`.
	- Once a player has no cards left in their hand:
	    - If there are more cards left in the deck, draw a new hand of the starting size
		- If there are no more cards left in the deck, skip their turn.
- Play continues until all players have emptied their hands
- Winners are determined by how many total books they've made

## Task

Using Python 3 and Functional Programming concepts, create a program that does the following:

- Generates a standard deck of playing cards
- Has a main function that takes an argument for the number of players, which simulates the entire game
    - For example, the simulation should be run with calls like `start_game(5)` for 5 players or `start_game(2)` for 2 players
- Deals a starting hand to each player, according to the rules above
- When selecting a card and player to ask, your program can do the simplest AI and choose at random
    - Remember that a player cannot ask themselves
- When a player collects 4 cards of the same rank, save them in the player's scoring zone.
- Continue running the simulation until there are no more cards in hands or the deck.
- Display the ending game state, which is how many books (and which ones) that each player made.

## Reference

You can play a GUI version of Go Fish [here](https://cardgames.io/gofish/).

## Requirements

- You need to use `pure functions` without `side effects`, with the only exception for anything that uses `print()` or returns a random number
- You must separate `pure functions` from `impure functions`
- You need to treat all function arguments as `immutable`
- You cannot use any python library functions that rely on modifying a variable in place
- You need to use recursion at least once
