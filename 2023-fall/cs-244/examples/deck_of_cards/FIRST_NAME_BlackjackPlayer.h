#ifndef FIRST_NAME_BLACKJACK_PLAYER_H
#define FIRST_NAME_BLACKJACK_PLAYER_H
#include "BlackjackPlayer.h"
#include "Deck.h"
#include <vector>
#include <string>

class FIRST_NAME_BlackjackPlayer : private BlackjackPlayer {
    private:

    public:
        // should return "hit" or "stand"
        std::string getAction(
            std::vector<Deck>, // all the player's and dealer's hands
            std::vector<Deck> // cards that have already been played in previous rounds
        );
};

#endif
