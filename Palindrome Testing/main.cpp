// This program determines if a string entered by a user is a palindrome or not.
// Caleb Murphy & Dawson Tomes
#include <iostream>
#include <string>
#include "Pstring.h"
using namespace std;

int main() {

    string inputString;

    // Get String from User
    cout << "This is a palindrome-testing program. Enter a string to test: ";
    getline(cin, inputString);
    
    // Creates Pstring object called str with inputString
    Pstring str(inputString);

    // Prints out that the string is a palindrome or not after it is passed to the function and evaluated.
    if (str.isPalindrome()) {
        cout << inputString << " is a palindrome\n";
    } else {
        cout << inputString << " is not a palindrome\n";
    }

    return 0;
}