#include "Rational.h"
#include <iostream>
using namespace std;

// Constructor that adjusts the sign placement and sets values when object is created.
Rational::Rational(int num, int denom) {
    if (denom < 0) {
        this->num = num;
        this->denom = -1 * denom;
        reduce();
        this->num *= -1;
    } else if (num < 0) {
        this->num = -1 * num;
        this->denom = denom;
        reduce();
        this->num *= -1;
    } else {
        this->num = num;
        this->denom = denom;
        reduce();
    }
};

// Reduce function that divides continously until it is completely reduced.
void Rational::reduce() {

    int min;

    // Sets min to either denom or num if either is the smaller value.
    min = denom < num ? denom : num;

    // Reduces fraction.
    for (int i = 2; i <= min; i++) {
        while((num % i == 0) && (denom % i == 0)) {
            this->num /= i;
            this->denom /= i;
        }
    }
}

// Overloaded operator that outputs value to screen.
ostream &operator<<(ostream &output, const Rational &r) {
    output << r.num << "/" << r.denom;
    return output;
}