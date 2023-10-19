#include "Card.h"
#include "Deck.h"
#include <cstdlib>
#include <iostream> // for std::cout

Deck::Deck(){
    // default constructor
    // assume standard 52 card deck, no jokers

    int index = 0; // tracks where in cards member variable you are inserting a new card
    for(int value = 1; value <= 13; value++){
        for(int suit = 1; suit <= 4; suit++){
            cards[index++] = Card(value, suit); // post increment will increase index after insertion
        }
    }
}

void Deck::print(){
    // for debugging only
    for(int index = 0; index < 52; index++){
        std::cout << cards[index].getString() << "\n";
    }
}

void Deck::shuffle(){
    // algorithm for shuffling:
    // swap two random elements
    // repeat 500 times

    // use current time to seed rand()
    srand((unsigned) time(NULL));

    for(int index = 0; index < 500; index++){
        int firstIndex = rand() % 52; // use modulus 52 to get a number between 0 and 51
        int secondIndex = rand() % 52;

        // swap the two random indices
        Card tempCard = cards[firstIndex];
        cards[firstIndex] = cards[secondIndex];
        cards[secondIndex] = tempCard;
    }
}

Card Deck::dealOne(){
    // since C++ arrays cannot change size once declared, we have to get creative
    // todo: check if topOfDeck == 52, meaning there are no more cards
    // warning: with this implementation, cannot shuffle after the first card is dealt
    return cards[topOfDeck++]; // post increment so that after we deal one, we update the topOfDeck value
}