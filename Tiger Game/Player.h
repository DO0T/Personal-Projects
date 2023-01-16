// Note: There is no Player.cpp file.
// The player class is simple enough to
// implement everything in Player.h

#ifndef PLAYER_H_
#define PLAYER_H_

#include "Hand.h" // we need Hand.h in order to instanitate a players hand

class Player
{
public:
    Hand hand; //hand object

    int score = 0; //default score

    Player() = default;
    
    Player(Deck deck, int N) 
    {
        hand = Hand(deck, N); // populates the players hand
    } 
};
#endif // PLAYER_H_
