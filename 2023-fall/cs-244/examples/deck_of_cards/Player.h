#ifndef PLAYER_H
#define PLAYER_H

#include "Card.h"
#include "Deck.h"
#include <vector>

class Player{
    private:
        std::string name;
        std::vector<Card> hand;
        int wins;
        int losses;
        int score;
    public:
        void drawCard(Card);
        Card discardCard();
        std::vector<Card> showCards();
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
