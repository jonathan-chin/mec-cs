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

        // by default, adds to top of deck
        void addCard(Card);
        // add card to specific index
        void addCard(Card, int);

        // returns a copy of existing cards
        // in case you want to examine them
        std::vector<Card> getCards();

        // removes top card of deck        
        Card removeCard();
        // removes any card from deck
        Card removeCard(int);

        void setCards(std::vector<Card>); // replace existing cards

        Deck(); // default constructor that fills with standard 52 card deck

        // overloaded constructor that skips standard 52 cards
        // pass an empty vector to start with an empty deck
        Deck(std::vector<Card>); 
};


#endif
