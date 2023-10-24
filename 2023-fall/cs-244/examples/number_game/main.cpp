#include "Game.h"
#include <iostream>
#include <cstdlib>

int main(){
    // seed random number generator just once
    srand((unsigned) std::time(NULL));

    // instantiate a game
    Game game = Game();

    // add 10 players
    for(int index = 0; index < 10; index++){
        game.addPlayer();
    }

    // play 500 rounds
    for(int index = 0; index < 500; index++){
        game.playRound();
    }

    // print state of game
    game.print();
}