#ifndef WARPLAYER_H
#define WARPLAYER_H
#include "Player.h"
#include "Deck.h"
#include "Card.h"

class WarPlayer : public Player // inheritance is public by default; may need to change
{
  private:
    Deck discardPile;
public:
  Card playTopCard();
  void addToDiscardPile(Card);
  void shuffleDiscardIntoHand();
};

#endif