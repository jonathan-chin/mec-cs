#ifndef WARPLAYER_H
#define WARPLAYER_H
#include "Player.h"
#include "Card.h"


class WarPlayer : public Player{ // inheritance is public by default; may need to change
    public:
        Card playTopCard();
        void addToDiscardPile(Card);
};

#endif