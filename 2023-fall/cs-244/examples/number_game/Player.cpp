#include "Player.h"
#include <cstdlib>
#include <iostream> // used for time() and cout

Player::Player(int newPlayerID){
    playerID = newPlayerID;

    // initialize these variables to 0
    // since the player is new to the game
    gamesPlayed = 0;
    wins = 0;
    losses = 0;
    ties = 0;
};

Player::Player(){
    // default constructor
    // needed because of Game's default constructor

    // leave blank since we will always overwrite from Game::addPlayer()
};

int Player::generateRandomNumber(){
    return std::rand() % 100;
};

void Player::increaseGamesPlayed(){
    gamesPlayed++;
};

void Player::increaseWins(){
    wins++;
};

void Player::increaseLosses(){
    losses++;
};

void Player::increaseTies(){
    ties++;
}

void Player::print(){
    // this is not recommend practice to print directly in a class / object
    // but the program requirements tell us to
    std::cout << playerID
        << "\ngames played:"
        << gamesPlayed
        << "\nwins: "
        << wins
        << "\nlosses: "
        << losses
        << "\nties: "
        << ties
        << "\n";
}