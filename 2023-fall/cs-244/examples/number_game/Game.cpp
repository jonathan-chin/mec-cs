#include "Game.h"
#include "Player.h"
#include <iostream>
#include <cstdlib>

void Game::addPlayer(){
    // instantiate a new player (ie create a Player object)
    // add to players[] at the right spot
    //    use a size variable to track the spot to insert
    // update size variable

    Player player = Player(size);
    players[size] = player;
    size++;
    // ideally, we should validate that there are 64 or fewer players
    // and prevent a 65th player to be added
}

Game::Game(){
    // default constructor
    // needed to initialize size variable
    size = 0;
}

void Game::playRound(){
    // select 2 random players
    // generate random number from each
    // check for win, loss, tie
    // update both players

    int firstPlayer = std::rand() % size;
    int secondPlayer = std::rand() % size;
    // small chance that the players are the same
    // but requirements don't tell us to check for that
    int firstPlayerNumber = players[firstPlayer].generateRandomNumber();
    int secondPlayerNumber = players[secondPlayer].generateRandomNumber();

    if(firstPlayerNumber > secondPlayerNumber){
        // first player wins
        players[firstPlayer].increaseGamesPlayed();
        players[firstPlayer].increaseWins();
        players[secondPlayer].increaseGamesPlayed();
        players[secondPlayer].increaseLosses();
    }

    if(firstPlayerNumber < secondPlayerNumber){
        // first player loses
        players[firstPlayer].increaseGamesPlayed();
        players[firstPlayer].increaseLosses();
        players[secondPlayer].increaseGamesPlayed();
        players[secondPlayer].increaseWins();
    }

    if(firstPlayerNumber == secondPlayerNumber){
        // tie
        players[firstPlayer].increaseGamesPlayed();
        players[firstPlayer].increaseTies();
        players[secondPlayer].increaseGamesPlayed();
        players[secondPlayer].increaseTies();
    }

};

void Game::print() {
    for(int index = 0; index < size; index++){
        players[index].print();
    }
}