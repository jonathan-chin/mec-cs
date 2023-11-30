#ifndef FIRST_NAME_BLACKJACK_PLAYER_H
#define FIRST_NAME_BLACKJACK_PLAYER_H
#include "Player.h"
#include "Deck.h"
#include <vector>
#include <string>

class FIRST_NAME_BlackjackPlayer : private Player {
    private:

    public:
        // should return "hit" or "stand"
        std::string getAction(
            std::vector<Deck>, // all the player's and dealer's hands
            Deck, // cards that have already been played in previous rounds
            std::vector<Player> // all other players at table
        );
};

#endif
