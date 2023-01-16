#ifndef HAND_H_
#define HAND_H_

#include <vector>
#include <string>
#include <sstream>

#include "Deck.h"

using namespace std; // needed for the string method printHand()

class Hand
{
public:
    Hand() = default; // default constructor
    Hand(Deck deck, int N)  // This constructor will instantiate the hand vector with card objects from the deck vector
    {
        for (int h = 0; h < N; h++)  // this for loop is pretty much the same as the deck for loop, however instead of populating the deck with color, this loop is populating
                                     // the hand vector with card objects
        {
            hand.push_back(deck.drawCard()); // this line is basically saying "draw a card from the deck and put it in the players hand"
        }
    }

    string printHand(); // prints the players hand

    Card dealCard(int num); // this method will allow the player to deal a card from their hand

    int getHandSize(){ return hand.size();} // returns the size of the players hand
private:
    vector<Card> hand;
};

#endif // HAND_H_
