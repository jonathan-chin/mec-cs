/*
    this demonstrates how to use the Deck and Card classes as external files

    to compile: g++ main.cpp Deck.cpp Card.cpp -o main.out
*/

#include <iostream>
#include "Card.h"
//#include "Deck.h" // file doesn't exist yet so comment out

int main(){
    Card twoOfHearts = Card(2, 3); // 3 is hearts
    std::cout << twoOfHearts.getSuitAsString();
}