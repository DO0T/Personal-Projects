#include "EncryptableString.h"
#include <iostream>
using namespace std;

// Initialization of encrypt function. Takes string and adds 1 to each char, makes 'z' || 'Z' into 'a' || 'A'
void EncryptableString::encrypt() {
    for(unsigned int i = 0; i < str.length(); i++) {
        if (str[i] == 'z') {
            str[i] = 'a';
        } else if (str[i] == 'Z') {
            str[i] = 'A';
        } else {
            str[i] = str[i] + 1;
        }
    }
}

// Displays the encrypted string to screen.
void EncryptableString::display() {
    cout << "Here is the encrypted string: " << str << endl;
}