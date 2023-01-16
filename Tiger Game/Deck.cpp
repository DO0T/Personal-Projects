#include "Deck.h"
#include <algorithm>
#include <iostream>
#include <random>

Card discard; // pun intended (used to temporarily store a card while a card is erased from the deck)

int randomSeed(int i) {return rand() % i;}
void Deck::shuffle() // this method shuffles the deck using the shuffle algorithm
{
    srand(unsigned(time(0))); // ensures true randomness

    random_shuffle(deck.begin(), deck.end(), randomSeed); // shuffles the deck

}

Card Deck::drawCard() 
{
    discard = deck.front();
    deck.erase(deck.begin());

    return discard;
}





