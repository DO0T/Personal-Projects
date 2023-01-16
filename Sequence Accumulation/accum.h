#pragma once
#ifndef ACCUM_H
#define ACCUM_H

#include <iostream>
#include <string>
#include <vector>
#include <numeric> // used for the accumulate method to calculate the total of the vector

using namespace std;

template <class T> // tempalte definition
T accum(vector <T> v) // defines vector v with template T
{
    int sum = accumulate(v.begin(), v.end(), 0); // calculates the total 

    return sum; // returns the total
}

string accum(vector <string> v) 
{
    string delim = "";

    for (const auto& e:v) // Printing and concatenating the vector
    {
        cout << delim << e; // prints the vector's element
        delim = ", "; // prints a comma when the vector is not at the last element
    }

   return " "; // returns an empty string after the vector prints
}

#endif 