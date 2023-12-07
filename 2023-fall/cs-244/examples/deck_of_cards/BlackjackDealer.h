#ifndef BLACKJACK_DEALER
#define BLACKJACK_DEALER
#include "BlackjackPlayer.h"

class BlackjackDealer : public BlackjackPlayer
{
private:
    Card hiddenCard;

public:
    std::string getAction(
        std::vector<Card>, // all the player's and dealer's hands
        std::vector<Card>  // cards that have already been played in previous rounds
    );
};

#endif