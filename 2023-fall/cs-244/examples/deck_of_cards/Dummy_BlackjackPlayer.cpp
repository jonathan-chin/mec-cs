#include "Dummy_BlackjackPlayer.h"

std::string Dummy_BlackjackPlayer::getAction(
    std::vector<Card> otherHands,
    std::vector<Card> discard)
{
  if (rand() % 2 == 0)
  {
    return "hit";
  }
  else
  {
    return "stand";
  }
}
