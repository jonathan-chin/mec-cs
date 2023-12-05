#ifndef DUMMY_BLACKJACK_PLAYER_H
#define DUMMY_BLACKJACK_PLAYER_H
#include "BlackjackPlayer.h"
#include "Deck.h"
#include <vector>
#include <string>

class Dummy_BlackjackPlayer : public BlackjackPlayer
{
private:

public:
        // should return "hit" or "stand"
        std::string getAction(
            std::vector<Deck>, // all the player's and dealer's hands
            Deck // cards that have already been played in previous rounds
        );
};

#endif
