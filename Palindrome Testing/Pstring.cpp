#include "Pstring.h"
#include <string>
#include <iostream>
using namespace std;

// Function determines if string is a palindrome by starting from the center letter
// and fanning out, comparing the two letters. If they're the same all the way through,
// the string is a palindrome and output true. If not, it will output false.
bool Pstring::isPalindrome() {
    bool palindrome = true;
    unsigned int rightIndex, leftIndex;

    if (length() % 2 == 0) {
        rightIndex = (this->length()) / 2;
        leftIndex = rightIndex - 1;
    } else {
        rightIndex = ((this->length()) / 2) + 1;
        leftIndex = ((this->length()) / 2) - 1;
    }

    while (palindrome && (rightIndex < this->length())) {
        if ((*this)[leftIndex] != (*this)[rightIndex]) {
            palindrome = false;
        }
        leftIndex--;
        rightIndex++;
    }

    return palindrome;
}