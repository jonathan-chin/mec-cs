#include "Player.h"

Player::Player(){
    // create an empty hand
    std::vector<Card> emptyHand;
    hand = Deck(emptyHand);
}

void Player::addCardToHand(Card card){
    hand.addCard(card);
};

Deck Player::showCards(){
    return hand;
}

void Player::emptyHand(){
    hand.clear();
}

void Player::addWin(){
    wins++;
}

void Player::addLoss(){
    losses++;
}

int Player::getWins(){
    return wins;
}

int Player::getLosses(){
    return losses;
}