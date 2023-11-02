#include "Card.h"
#include "Deck.h"
#include <cstdlib>
#include <iostream> // for std::cout

Deck::Deck(){
    // default constructor
    // assume standard 52 card deck, no jokers

    for(int value = 1; value <= 13; value++){
        for(int suit = 1; suit <= 4; suit++){
            cards.push_back(Card(value, suit));
        }
    }
}

void Deck::print(){
    // for debugging only
    for(Card &card : cards){
        std::cout << card.getString() << "\n";
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
    Card lastCard = cards[cards.size() - 1];
    cards.pop_back();
    return lastCard;
}