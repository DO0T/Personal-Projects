// Dawson Tomes CPSC 1021 Lab 9 Sequence Accumulation
#include <iostream>
#include <string>
#include <vector>
#include "accum.h"

using namespace std;

int main () 
{
    vector<int> numbers; // vector to hold ints
    int vectorInput; // used to store the elements in the vector
    const int SIZE = 4; // constant size of the vector

    vector<string> names; // vector to hold the names of the strings
    string stringInput; // used to store the elements in the string vector

    cout << "Enter four numbers: ";

    for (int i = 0; i < SIZE; i++) // vector input
    {
        cin >> vectorInput;
        numbers.push_back(vectorInput);
    }

    cout << "The sum of the numbers is " << accum(numbers) << endl; // calls the accum template func.

    cout << "Enter four strings: ";

    for(int j = 0; j < SIZE; j++) // vector string input
    {
        cin >> stringInput;
        names.push_back(stringInput);
    }

    cout << "The sum of the strings is " << accum(names) << endl; // calls the overloaded accum template func.

    return 0;
}