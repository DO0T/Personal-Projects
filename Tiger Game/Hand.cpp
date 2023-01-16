#include "Hand.h"

using namespace std;

stringstream playerHand;
Card temporaryCard; // a temporary card is needed in order to main to integrity of the hand/deck

string Hand::printHand() 
{
    for (int p = 0; p < Hand::getHandSize(); p++) 
    {
        playerHand << '[' << to_string(p + 1) << ']' << hand[p].printCard() << ' '; // this line type casts the hand size into a string so it can be properly formatted/printed
    }

    return playerHand.str();
}

Card Hand::dealCard(int num)  // dealcard assigns temporary card to the hand vector with an index of num - 1
{
    temporaryCard = hand[num - 1];

    hand.erase(hand.begin() + num - 1);

    return temporaryCard;
}

