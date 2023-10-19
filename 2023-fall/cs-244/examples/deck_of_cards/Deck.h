#ifndef DECK_H
#define DECK_H

#include "Card.h"

class Deck {
    private:
        Card cards[52];
        int topOfDeck = 0;

    public:
        void shuffle();
        void print(); // only for debugging
        Card dealOne();
        Deck();
};


#endif