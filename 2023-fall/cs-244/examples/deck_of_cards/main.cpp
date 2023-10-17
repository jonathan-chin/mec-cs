/*
    this demonstrates how to use the Deck and Card classes as external files

    to compile: g++ main.cpp Deck.cpp Card.cpp -o main.out
*/

#include <iostream>
#include "Card.h"
#include "Deck.h" // file doesn't exist yet so comment out

int main(){
    Deck deck = Deck();
    deck.shuffle();

    Card card;
    for(int index = 0; index < 5; index++){
        card = deck.dealOne();
        std::cout << card.getString() << " ";
    }
}