#ifndef CARD_H_
#define CARD_H_

#include <string>

using namespace std; // namespace is needed to define printCard()

class Card
{
public:
    enum Color {purple, orange};

    Card() = default; // default constructor
    Card(int rank, Color color) : rank(rank), color(color) {}

    string printCard(); // this method prints the color of the card followed by the rank. Ex: purple:5

    //Getters
    int getRank() { return rank;}
    Color getColor() {return color;}
    int getValue();
private:
    int rank = 0; // rank holds a value between 1 and 10
    int value = 0;

    Color color = Color::purple; // color choices are purple or orange (as defined by the enum above)
};
#endif // CARD_H_
