#ifndef PLAYER_H
#define PLAYER_H

#include "Card.h"
#include "Deck.h"
#include <vector>

class Player{
    private:
        std::string name;
        Deck hand;
        int wins;
        int losses;
        int score;
    public:
        // need to define an default constructor
        // so that hand is created with an empty deck instead of a full one
        Player();

        void addCardToHand(Card);

        // removes card from hand and returns it
        // assume overloaded logic per game to determine which card to play
        Card playCard();

        // returns a copy of hand
        Deck showCards();

        // sets hand to an empty vector
        void emptyHand();

        int getWins();
        void addWin(int);
        void addWin();
        int getLosses();
        void addLoss(int);
        void addLoss();
        int getScore();
        void addScore();
        void addScore(int);
        std::string getName();
        void setName(std::string);
        bool hasCardsInHand();
};

#endif
