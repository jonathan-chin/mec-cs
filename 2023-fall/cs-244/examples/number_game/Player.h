#ifndef PLAYER_H
#define PLAYER_H

class Player {
    private:
        int playerID;
        int gamesPlayed;
        int wins;
        int losses;
        int ties;

    public:
        // don't provide setter / mutator for playerID since it should not be changed after instantiation
        Player(int);
        Player();
        int generateRandomNumber();
        void increaseGamesPlayed();
        void increaseWins();
        void increaseLosses();
        void increaseTies();

        // for the sake of condensing code, print all member variables at once
        void print();
};

#endif