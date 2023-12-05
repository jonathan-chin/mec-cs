#ifndef BLACKJACK_PLAYER_H
#define BLACKJACK_PLAYER_H
#include "Player.h"
#include "Deck.h"
#include <vector>
#include <string>

class BlackjackPlayer : public Player {
    private:

    public:
        // should return "hit" or "stand"
        // is declared as virtual, meaning that it MUST be implemented by other classes that inherit from it
        virtual std::string getAction(
            std::vector<Deck>, // all the player's and dealer's hands
            Deck // cards that have already been played in previous rounds
        ) = 0;
};

#endif
