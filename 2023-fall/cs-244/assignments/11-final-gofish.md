# Final Go Fish

## Purpose

- To demonstrate mastery of OOP principles in C++, namely inheritance
- To demonstrate mastery of managing multifile projects with multiple authors

## Task

Using the `Deck`, `Card`, and `Player` classes that we have been working with for the last 3 projects, you are asked to extend the code to implement a `Go Fish` game simulator. You will create a `GoFishPlayer` class that inherits from `Player` and a `GoFishMain` file that plays 2 instances of them against each other.

## Game Rules

`Go Fish` is a simple card game played where the goal is to empty your hand first. There are several variations of rules, but we will follow these ones specifically:

- there will only be 2 players and will use a single, standard deck of cards
  - 52 cards with no jokers
- at the start of the game, each player receives 7 cards
- if any player has a `pair of cards` that share the same `card rank`, remove both cards from their hand
  - `card ranks` are values like 2, 3, ... 8, 9, 10, J, Q, K, A
  - only remove `pairs`; for example:
    - if they have 2 queens, remove both
	- if they have 3 queens, remove 2 and let them keep 1
	- if they have 4 queens, remove all 4
- determine who will go first; you can use any logic you want such as the first player always goes first, or the person who has lost the most so far will go first, or choose the first player at random
  - you `must` leave a comment in your code explaining which logic you chose
- during a player's turn, they will ask the other player for a particular `card rank`
  - you can use any logic you want to decide which `card rank` to ask for, such as picking at random, picking a random card in the current player's hand, etc.
  - you `must` leave a comment in your code explaining which logic you chose
  - if the opposing player has a card with that `card rank`, remove the card from the opposing player's hand and remove 1 card with the same `card rank` from the current player's hand
  - if the opposing player does not have a card with that `card rank`, give the current player an additional card
    - if this new card shares a `card rank` with any existing card in that player's hand, remove both
	  - if there are no new cards to give, then don't give the player a new card
  - this ends the current player's turn and passes to the next player
- if at any time a player has no cards in hand, the game ends and they win.

## Files You Will Need to Download

You will need these files in order to work on this program. You `cannot modify` them and `will not` submit them.

- [Card.cpp](https://github.com/jonathan-chin/mec-cs/blob/main/2023-fall/cs-244/examples/deck_of_cards/Card.cpp)
- [Card.h](https://github.com/jonathan-chin/mec-cs/blob/main/2023-fall/cs-244/examples/deck_of_cards/Card.h)
- [Deck.cpp](https://github.com/jonathan-chin/mec-cs/blob/main/2023-fall/cs-244/examples/deck_of_cards/Deck.cpp)
- [Deck.h](https://github.com/jonathan-chin/mec-cs/blob/main/2023-fall/cs-244/examples/deck_of_cards/Deck.h)
- [Player.h](https://github.com/jonathan-chin/mec-cs/blob/main/2023-fall/cs-244/examples/deck_of_cards/Player.h)

## Files You will Need to Create

- `Player.cpp` this is an implementation of the Player class defined in `Player.h`; note: you can reuse the same file that you've used for the previous card game projects
- `GoFishPlayer.h` this will inherit from the `Player` class and create a `GoFishPlayer` class that will be used in the game described; this header file should `only` contain member variables and member function prototype
- `GoFishPlayer.cpp` will implement all the function prototypes defined in `GoFishPlayer.h`
- `GoFishMain.cpp` will use the `GoFishPlayer` class and any other classes in order to implement the game described
  - for example, you will likely need to use the `Deck` class
  - please also print out all game actions, such as "player 1 asks for 8s"
  - when the game is finished, print out who has won
These are the only files you will ultimately submit. You should not need to include any other files.

## Grading Rubric

This exam will be graded using the same rubric as your assignments and midterm. It can be found on our [GitHub repository](https://github.com/jonathan-chin/mec-cs/tree/main/2023-fall/cs-244).

## Make Sure Your Code Compiles

OOP code written in C++ can be incredibly complex. If your code does not compile due to syntax errors, you will automatically receive -1 (on a 10 point scale). Also, if your code does not compile, it will be more difficult for me to evaluate your code effectively.

## A Reminder About Comments

Writing good comments is a valuable skill for software developers. As a reminder, having well-written comments accounts for 2 points (on a 10 point scale) of your exam's grade.

## Use of Generative AI

The purpose of this exam is to demonstrate your knowledge and mastery of the skills you've been practicing over the last 15 weeks. Therefore, using generative AI to complete any or all of this exam will prevent me from assessing your knowledge accurately. Any suspicion of the use of generative AI will lead to a 0 for the exam.

Generative AI can include, but is not limited to, ChatGPT, Google Bard, and GitHub Copilot.

## Open Book Policy

For this exam, you may review previous code that you've written for any of our labs and assignments. You may also review any code available on our GitHub repository.

However, you `cannot` copy and paste any previously written code. The only exception to this is `Player.cpp`, which you can reuse from previous assignments.
