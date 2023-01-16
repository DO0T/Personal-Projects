// This program encrypts a string and outputs that string.
// Caleb Murphy & Dawson Tomes
#include <iostream>
#include <string>
#include "EncryptableString.h"
using namespace std;

int main() {
    // Variable to store initial string.
    string s;

    // Prompts user to input a string for encryption.
    cout << "This is an Encryption program. Enter a string to encrypt: ";
    cin >> s;

    // Creates object and stores value inside of object.
    EncryptableString stringToEncrypt(s);

    // Calls encrypt function to encrypt the string.
    stringToEncrypt.encrypt();

    // Calls display function to display the encrypted string to screen.
    stringToEncrypt.display();

    return 0;
}