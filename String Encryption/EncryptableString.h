#ifndef ENCRYPTABLESTRING_H
#define ENCRYPTABLESTRING_H
#include <iostream>
#include <string>
using namespace std;

// Class declaration and initilization. Child class to string class.
class EncryptableString : public string {
    private:
        string str{""};
    public:
        EncryptableString() = default;
        EncryptableString(string s) : str{s} {}
        void encrypt();
        void display();
};

#endif // !ENCRYPTABLESTRING_H