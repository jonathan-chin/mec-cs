#include "Dummy_BlackjackPlayer.h"
#include "BlackjackPlayer.h"
#include "Deck.h"
#include <vector>
#include <iostream>
#include <stdlib.h> // for rand and srand
#include <time.h>   // for time for srand

int main(){
    srand(time(NULL)); // use random seed on instantiation
    Player* p1 = new Dummy_BlackjackPlayer();
    Player* p2 = new Dummy_BlackjackPlayer();
    //    Dummy_BlackjackPlayer p1;
    //  Dummy_BlackjackPlayer p2;
    std::vector<Deck> otherHands;
    Deck discard;

    // BlackjackDealer will always be the first player
    std::vector < std::shared_ptr<BlackjackPlayer> > players;
    players.push_back(std::shared_ptr<BlackjackPlayer>(new Dummy_BlackjackPlayer()));
    for(int index = 0; index < 100; index++){
    std::cout << players[0]->getAction(
        otherHands,
        discard
    );
    }
}
