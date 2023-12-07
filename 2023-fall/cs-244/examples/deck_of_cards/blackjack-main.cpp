#include "Dummy_BlackjackPlayer.h"
// include your player here
#include "BlackjackPlayer.h"
#include "BlackjackDealer.h"
#include "Deck.h"
#include <vector>
#include <iostream>
#include <memory>
#include <stdlib.h> // for rand and srand
#include <time.h>   // for time for srand

// create a special function to get a card from the deck
// since will need to shuffle discard back into deck if deck is empty
// will save time
Card getCard(Deck &deck, Deck &discard)
{
    if (deck.isEmpty())
    {
        deck = discard;
        discard.clear();
        deck.shuffle();
    }
    return deck.removeCard();
}

int getHandValue(std::vector<Card> hand)
{
    int handValue = 0;
    for (Card &card : hand)
    {
        handValue += card.getValue();
    }
    return handValue;
}

int main()
{
    srand(time(NULL)); // use random seed on instantiation
    std::vector<Deck> otherHands;
    Deck deck;
    Deck discard;
    discard.clear();
    deck.shuffle();
    // track all the face up cards that players have
    std::vector<Card> knownCards;

    // setup helper variables
    Card tempCard;
    std::string tempAction;

    // BlackjackDealer will always be the first player
    std::vector<std::shared_ptr<BlackjackPlayer> > players;
    players.push_back(std::shared_ptr<BlackjackPlayer>(new BlackjackDealer()));
    players.push_back(std::shared_ptr<BlackjackPlayer>(new Dummy_BlackjackPlayer()));
    // push_back your player
    players.push_back(std::shared_ptr<BlackjackPlayer>(new Dummy_BlackjackPlayer()));
    players.push_back(std::shared_ptr<BlackjackPlayer>(new Dummy_BlackjackPlayer()));

    for (int gameIteration = 0; gameIteration < 100; gameIteration++)
    {
        std::cout << "==== game " << gameIteration << "\n";
        // start of game

        // deal only 1 card to the dealer; this simulates them having 1 card hidden
        // mathematically, this is not the same as dealing them a facedown card in the beginning
        // but is close enough!
        tempCard = getCard(deck, discard);
        std::cout << "p0" << " gets " << tempCard.getString() << "\n";
        knownCards.push_back(tempCard);
        players[0]->addCardToHand(tempCard);

        // now deal 2 to each player
        for (int index = 1; index < players.size(); index++)
        {
            // deal 1
            tempCard = getCard(deck, discard);
            std::cout << "p" << index << " gets " << tempCard.getString() << "\n";
            knownCards.push_back(tempCard);
            players[index]->addCardToHand(tempCard);

            // deal 2
            tempCard = getCard(deck, discard);
            std::cout << "p" << index << " gets " << tempCard.getString() << "\n";
            knownCards.push_back(tempCard);
            players[index]->addCardToHand(tempCard);
        }

        // for each non dealer player, run getAction until it is "stand" or that player busts
        for (int index = 1; index < players.size(); index++)
        {
            do
            {
                // get their action
                tempAction = players[index]->getAction(knownCards, discard.getCards());
                std::cout << "p" << index << " " << tempAction << "s\n";

                if (tempAction == "stand")
                {
                    // exit out of the loop
                    break;
                }
                if (tempAction == "hit")
                {
                    tempCard = getCard(deck, discard);
                    std::cout << "p" << index << " gets " << tempCard.getString() << "\n";
                    knownCards.push_back(tempCard);
                    players[index]->addCardToHand(tempCard);

                    // calculate if they have bust
                    int playerHandValue = getHandValue(players[index]->showCards().getCards());
                    std::cout << "p" << index << " has " << playerHandValue << "\n";
                    if (playerHandValue > 21)
                    {
                        std::cout << "p" << index << " has busted!\n";
                        // exit out of the loop
                        break;
                    }
                }
            } while (tempAction == "hit");
        }

        // all players have gone
        // now give dealer remaining card
        tempCard = getCard(deck, discard);
        std::cout << "p0 reveals " << tempCard.getString() << "\n";
        knownCards.push_back(tempCard);
        players[0]->addCardToHand(tempCard);

        // now do the same for the dealer
        // todo: functionalize this instead of copy and paste
        do
        {
            // get their action
            tempAction = players[0]->getAction(knownCards, discard.getCards());
            std::cout << "p0" << " " << tempAction << "s\n";

            if (tempAction == "stand")
            {
                // exit out of the loop
                break;
            }
            if (tempAction == "hit")
            {
                tempCard = getCard(deck, discard);
                std::cout << "p0" << " gets " << tempCard.getString() << "\n";
                knownCards.push_back(tempCard);
                players[0]->addCardToHand(tempCard);

                // calculate if they have bust
                int playerHandValue = getHandValue(players[0]->showCards().getCards());
                std::cout << "p0" << " has " << playerHandValue << "\n";
                if (playerHandValue > 21)
                {
                    std::cout << "p0" << " has busted!\n";
                    // exit out of the loop
                    break;
                }
            }
        } while (tempAction == "hit");

        // everyone has their cards now!
        // determine wins and losses
        int dealerHandValue = getHandValue(players[0]->showCards().getCards());
        std::cout << "p0 has " << dealerHandValue << "\n";
        if(dealerHandValue > 21){
            std::cout << "p0 has busted!\n";
        }
        for (int index = 1; index < players.size(); index++)
        {
            int playerHandValue = getHandValue(players[index]->showCards().getCards());
            std::cout << "p" << index << " has " << playerHandValue << "\n";
            // first check if player has busted
            if (playerHandValue > 21)
            {
                std::cout << "p" << index << " has busted!\n";
                players[index]->addLoss();
                continue;
            }
            // then check if dealer has busted
            if (dealerHandValue > 21)
            {
                // no need to check what the player's actual score is
                // since we've already checked if they busted
                std::cout << "p" << index << " wins!\n";
                players[index]->addWin();
                continue;
            }

            // finally, check if player has won
            if (playerHandValue > dealerHandValue)
            {
                std::cout << "p" << index << " wins!\n";
                players[index]->addWin();
                continue;
            }
            else
            {
                // for simplicity, dealer gets the "House Edge"
                // and is considered to win on ties
                std::cout << "p" << index << " loses!\n";
                players[index]->addLoss();
                continue;
            }
        }

        // end of game
        // empty everyone's hands!
        for (int index = 0; index < players.size(); index++)
        {
            std::vector<Card> playersCards = players[index]->showCards().getCards();
            for (Card &card : playersCards)
            {
                discard.addCard(card);
            }
            players[index]->emptyHand();
        }
        std::cout << "\n";
    }

    // all games have been played!
    // print out the results
    for (int index = 1; index < players.size(); index++)
    {
        std::cout << "p" << index << "\t"
                  << "w" << players[index]->getWins() << "\t"
                  << "l" << players[index]->getLosses() << "\t"
                  << "%" << (players[index]->getWins() * 1.0 / (players[index]->getWins() + players[index]->getLosses())) << "\n";
    }
}