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
        player1.drawCard(deck.dealOne());
        player2.drawCard(deck.dealOne());
    }

    // round of play
    Card player1Card;
    Card player2Card;

    while (player1.hasCardsInHand() && player2.hasCardsInHand())
    {
        player1Card = player1.playTopCard();
        player2Card = player2.playTopCard();

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