#ifndef GAME_H
#define GAME_H

#include "Player.h"

class Game{
    private:
        Player players[64];
        int size;

    public:
        Game();
        void addPlayer();
        void playRound();
        void print();

};

#endif