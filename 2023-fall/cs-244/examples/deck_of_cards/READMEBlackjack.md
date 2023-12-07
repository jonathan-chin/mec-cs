# Player.h and Player.cpp

`Player.h` is the base class for all of our card game players. The `header` file describes all of the members that are needed. You need to provide a `Player.cpp` file that implements all member functions in the `header` file.

# BlackjackPlayer.h and BlackjackPlayer.cpp

In order to allow multiple implementations of Blackjack players, we need provide a second base class. You will inherit from this class instead of `Player.h`

# FIRST_NAME_BlackjackPlayer.h and FIRST_NAME_BlackjackPlayer.cpp

Replace FIRST_NAME with your first name. Write code to implement `getAction` and use whatever algorithm or decision making process you need to return `hit` or `stand`

# Dummy_BlackjackPlayer.h and Dummy_BlackjackPlayer.cpp

I've provided an example of how you can write your Blackjack Player class. DummyBlackjackPlayer is the simplest model; it flips a coin and returns `hit` and `stand` with a 50% chance each.

# blackjack-main.cpp

This will be used to run all the games between players. A small version of it is provided for you so that you can test your class against the Dummy Blackjack Player and see how well it does. Once all students have sent in their classes, this will be updated to play all classes against each other.

# compiling

`g++ blackjack-main.cpp FIRST_NAME_BlackjackPlayer.cpp Dummy_BlackjackPlayer.cpp BlackjackDealer.cpp BlackjackPlayer.cpp Player.cpp Deck.cpp Card.cpp -o blackjack.out`