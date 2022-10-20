# 05 Midterm

## Task

Write a series of `pure` and `impure` functions to create a simplified game engine for `Settlers of Catan`. You must use `functional programming` concepts, including the coding patterns that we have demonstrated and discussed in class.

## Background

`Settlers of Catan` is a very popular board game; it has sold more than 32 million copies in 40 languages [1]. The premise is that a group of players have traveled to a new island and race to get control. They harvest various resources, use those resources to build structures like settlements, cities, and roads, earning victory points along the way. They have armies they can use and there is the ever-looming shadow of the `Robber` who steals from the rich. The first player to reach 10 victory points wins!

1 [NPR, Families Stuck At Home Turn To Board Game Catan, Sending Sales Skyrocketing](https://www.npr.org/2020/08/07/897271885/)

## Our Engine

We will be replicating a `much simpler` variation:
- Players will have a hand of resources and a total number of victory points.
- Each round, a player will receive a random resource
  - The available resources are `wool`, `grain`, `lumber`, `brick`, and `ore`
- After receiving a new resource, if a player has 3 of the same resource, they will trade that in for 1 victory point. Those 3 resources are removed from their hand.
- If a player has a total of 6 or more resources (in any combination), they must discard half of each resource, rounded down.

```
example:
Player A has  2 wool, 1 grain, 0 lumber, 2 brick, and 1 ore
Player A must discard
They now have 1 wool, 0 grain, 0 lumber, 1 brick, and 0 ore
```

- Once any player has 10 victory points, they win!

## Task

- Create a game with 10 players, each with an empty hand of resources and 0 victory points.
- Run rounds until you have at least 1 winner. Announce the game state each round.
  - *Note* with our engine, it is possible that multiple players will get 10 points during the same round. In `Catan`, only one player can win and there are various mechanics to make sure there is only one. For our game, it's ok to have multiple winners.

## Bonus +1 point

There are two constants here that determine the flow of the game:
- How many resources a player needs to trade in for 1 victory point. In this case, that number is 3.
- How many resources a player can have before they discard. In this case, the cutoff is 6.

Write these as general functions and create curried functions that pass in these magic numbers, 3 and 6. This way, we can easily run variations of the game by changing those numbers.
