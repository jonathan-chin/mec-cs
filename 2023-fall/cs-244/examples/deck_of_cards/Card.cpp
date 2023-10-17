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
    switch(value){
        case 1:
            return "ace";
        break;
        case 11:
            return "jack";
        break;
        case 12:
            return "queen";
        break;
        case 13:
            return "king";
        break;
        default:
            return std::to_string(value);
    }
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
        return "unknown";
        break;
    }
}

std::string Card::getString(){
    return getValueAsString() + " of " + getSuitAsString();
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