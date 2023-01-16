// This program takes a fraction and reduces to smallest form.
// Caleb Murphy & Dawson Tomes
#include <iostream>
#include "Rational.h"
using namespace std;

int main() {

    // Variables that will store user input.
    int num, denom;

    // Prompts user to input num and denom then stores it.
    cout << "Enter the numerator and denominator separated by a space: ";
    cin >> num >> denom;

    // Creates object with user's input of num and denom.
    Rational fraction(num, denom);
    
    // Outputs the reduced form of the fraction.
    cout << "Reduced form: " << fraction;

    return 0;
}