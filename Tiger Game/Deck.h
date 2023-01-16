#ifndef DECK_H_
#define DECK_H_

#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

#include "Card.h"

class Deck
{
public:
    Deck()  
    {
        for(int d = 1; d <= 10; d++) // The purpose of this constructor is to populate the deck vector when the game starts.
                                     // main will call "Deck deckOfCards" to instantiate the deck with purple and orange cards.
                                     // The logic d <= 10; ensures that the deck will not be populated with more than 20 cards
        {
            deck.push_back(Card(d, Card::Color::purple)); // in order to implement the enum colors, this line gets a reference to the Card class then the
            deck.push_back(Card(d, Card::Color::orange)); // color object in order to populate the vector.
        }
    }

    void shuffle(); // this method shuffles the deck vector once populated by the constructor (used by deckOfCards object)

    Card drawCard(); // draws a card from the deck and will then remove it from the vector. (deck)

    //Getter
    int getDeckSize() {return deck.size();} //returns the current number of cards in the deck
private:
    vector<Card> deck; // creates a "deck" of cards using a vector of Card objects 
};
  

#endif // DECK_H_
