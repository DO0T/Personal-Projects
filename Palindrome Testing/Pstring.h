#ifndef PSTRING_H
#define PSTRING_H
#include <string>
using namespace std;

// PString class with inheritance to string STL class
class Pstring: public string {
    public:
        Pstring() = default;
        Pstring(string s) : string(s) {}
        bool isPalindrome();
    private:
};

#endif // !PSTRING_H