# 07 War

## Purpose

We will continue practicing functional programming concepts in Python 3.

## Background

War is a very simple card game between 2 or more players. It requires no decision making skills and relies purely on luck. If you're unfamiliar with the rules, you can watch this [quick 1 minute 30 second video](https://www.youtube.com/watch?v=J5vT33Vo04s).

## Rules Changes

To make this card game easier to code and achievable within 7 days, we will implement the following rules changes:

1. There are no jokers in the deck.
2. Whenever a player wins a face off and collects their cards, they will place them on the `bottom` of their deck in `any order`. We will not implement a discard pile.
3. In the case that both face up cards have the same `rank` (2-10, Jack-Ace), the card with the higher `suit` (clubs, diamonds, hearts, spades) will win. The order of suits is:
    1. clubs (lowest)
	2. diamonds
	3. hearts
	4. spades (highest)
	For example, if players turn over a 5 of diamonds and a 5 of hearts, the player with the 5 of hearts will win and collect the cards (hearts is higher than diamonds).

## Task

Using Python 3 and Functional Programming concepts, create a program that does the following:

- Generate a standard deck of playing cards, minus the jokers
- Randomly split the deck evenly among two players
- Have each player reveal the first card in their personal decks, determine a winner, and place those cards at the bottom / end of the winner's personal deck
- Print out the game state at each round
- Stop the game when either player is out of cards

Note: the order of card ranks is:

- 2 (lowest)
- 3
- 4
- ...
- 9
- 10
- Jack
- Queen
- King
- Ace (highest)

## Requirements

- You need to use `pure functions` without `side effects`, with the only exception for anything that uses `print()`
- You need to treat all function arguments as `immutable`
- You need to use recursion at least once
