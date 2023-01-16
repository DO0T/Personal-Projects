#include "Card.h"
#include <string>

using namespace std;

string Card::printCard()  // this method prints the color of the card followed by the rank. Ex: purple:5
{
    switch(color == Color::orange)  // checks to see if the color is orange
    {
        case true:
            return "orange:" + to_string(rank); // prints the formatted string as followed: orange:8
        case false:
            return "purple:" + to_string(rank); // prints the formatted string as followed: purple:4
    }
}

int Card::getValue() 
{       
    if(color == Color::orange) 
    {
        value = rank * 2;
    }
    else 
    {
        value = rank;
    }
    return value;
}
