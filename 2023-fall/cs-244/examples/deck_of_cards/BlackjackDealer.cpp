#include "BlackjackDealer.h"
#include <iostream>


std::string BlackjackDealer::getAction(
    std::vector<Card> hands,
    std::vector<Card> discard)
{
    // The dealer hits on 16 and below and stands on 17 and above.
    Deck tempHand = showCards();
    int handValue = 0;
    for (Card &card : tempHand.getCards())
    {
        handValue += card.getValue();
    }
    if (handValue <= 16)
    {
        return "hit";
    }
    else
    {
        return "stand";
    }
}