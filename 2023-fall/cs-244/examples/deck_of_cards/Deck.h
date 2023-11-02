#ifndef DECK_H
#define DECK_H

#include "Card.h"
#include <vector>

class Deck {
    private:
        std::vector<Card> cards;

    public:
        void shuffle();
        void print(); // only for debugging
        Card dealOne();
        Deck();
};


#endif