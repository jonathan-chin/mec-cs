# database design
## Smash Bros Tournament database

---

## guiding questions
- why does this database exist?
- how are you going to use it?
- who is going to use it?

## possible purpose:
- to keep track of the moving parts of a game (game development)
- to give players ease of access about the games (strategy guide)
- to let people recognize patterns and play the game better (strategy guide, analytics)
- to learn the structure of these games (game development of a new game)
- to keep track of a Smash Bros tournament, who plays, the rounds, who wins, etc. (record keeping)

## how are you going to use it?
- analytics
  - which characters are winning the most or being banned, matchup percentages
    - character balancing
  - which stages are more difficult
    - stage playtime?
    - number of out of bounds?
    - number of times played?
  - player data
    - individual player preferences
    - favors characters
    - origin / country
    - inform future tournaments (eg the country)
- reports
  - who won / lost
    - player records

## who is going to use it? (note: users / clients)
- organizers (write / read permissions)
  - create brackets
  - add players
  - look at analytics to fundraise
  - look at analytics to inform future tournaments
  - secure a venue
- commentators / casters (read only)
  - look at players, pick rates (analytics)
  - predict matchups / picks (analytics)
- players (read only)
  - look at past data to strategize for future
  - look at brackets to see upcoming matches
- match client (write permissions only on their match)
  - input data about matches (playtime, win / loss, etc)
- viewers (limited write permissions)
  - create bets
  - see if bets won / loss
  - use analytics to inform bets



## how can we represent the data in tables to meet our needs?
- venues
- bets
- [x] matches
- [x] brackets (represented in matches)
- players
- characters?
- organizers?
- tickets (can viewers buy more than 1 ticket?)?
- viewers?

## assumptions
- rounds only have exactly 2 players
- players have ids
- rounds.which_won is the player id of who won
- player wins / losses are only for this tournament
