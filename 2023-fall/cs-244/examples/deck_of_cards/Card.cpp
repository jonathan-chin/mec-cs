/*
    implementation of Card Class
*/

#include <string> // don't need full iostream
#include "Card.h"

int Card::getValue()
{
    return value;
}

std::string Card::getValueAsString()
{
    // todo: implement
}

int Card::getSuit()
{
    return suit;
}

std::string Card::getSuitAsString()
{
    switch (suit)
    {
    case 1:
        return "diamonds";
        break;
    case 2:
        return "clubs";
        break;
    case 3:
        return "hearts";
        break;
    case 4:
        return "spades";
        break;
    default:
        // todo: what should be default?
        break;
    }
}

Card::Card(int newValue, int newSuit)
{
    // todo: perform some validation
    value = newValue;
    suit = newSuit;
}

// default constructor
Card::Card()
{
    // todo: are these the default values we want?
    value = 1;
    suit = 1;
}