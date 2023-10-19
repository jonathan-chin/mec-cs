/*
    header file for Card class
    define only prototypes
*/

#ifndef CARD_H // include guards
#define CARD_H

#include <string> // don't need full iostream

class Card{
    private:
        // use ints for easier ordering / comparisons
        int value;
        int suit;

    public:
        // accessors
        int getValue();
        std::string getValueAsString();
        int getSuit();
        std::string getSuitAsString();
        std::string getString();

        /*
            since a card's suit and value should not be changeable
            after it is created, don't define mutator functions
        */

        Card(int newValue, int newSuit);
        Card(); // good practice to include a default constructor
};

#endif