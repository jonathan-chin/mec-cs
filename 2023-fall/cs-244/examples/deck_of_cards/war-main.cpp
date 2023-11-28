#include "WarPlayer.h"
#include "Deck.h"
#include <iostream>

int main()
{
    // setup
    WarPlayer player1;
    WarPlayer player2;

    Deck deck;
    deck.shuffle();
    for (int index; index < 26; index++)
    {
        player1.addCardToHand(deck.removeCard());
        player2.addCardToHand(deck.removeCard());
    }

    // round of play
    Card player1Card;
    Card player2Card;

    // since players shuffle their discard pile into their hand as needed WITHIN the loop
    // this condition is sufficient
    // within the loop, they will shuffle their discard pile into their hand
    // if their discard pile is empty, their hand will be empty
    while (player1.hasCardsInHand() && player2.hasCardsInHand())
    {
        // play cards from each player
        player1Card = player1.playTopCard();
        player2Card = player2.playTopCard();

        // reshuffle discard pile into hand if needed
        if (!player1.hasCardsInHand())
        {
            player1.shuffleDiscardIntoHand();
        }
        if (!player2.hasCardsInHand())
        {
            player2.shuffleDiscardIntoHand();
        }

        if (player1Card.getValue() > player2Card.getValue())
        {
            // player 1 wins, put both cards in player 1's discard pile
            player1.addToDiscardPile(player1Card);
            player1.addToDiscardPile(player2Card);
        }
        else if (player1Card.getValue() < player2Card.getValue())
        {
            // player 2 wins, put both cards in player 2's discard pile
            player2.addToDiscardPile(player1Card);
            player2.addToDiscardPile(player2Card);
        }
        else if (player1Card.getValue() == player2Card.getValue())
        {
            // need to check suits for winner
            if (player1Card.getSuit() > player2Card.getSuit())
            {
                player1.addToDiscardPile(player1Card);
                player1.addToDiscardPile(player2Card);
            }
            else
            {
                // assume there are no ties
                player2.addToDiscardPile(player1Card);
                player2.addToDiscardPile(player2Card);
            }
        }
    }

    // check who wins
    if (player1.hasCardsInHand())
    {
        std::cout << "Player 1 has won!\n";
    }
    else
    {
        std::cout << "Player 2 has won!\n";
    }
}
