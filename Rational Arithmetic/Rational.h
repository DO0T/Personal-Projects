#ifndef RATOINAL_H
#define RATIONAL_H
#include <iostream>
using namespace std;

// Declaration of Rational class.
class Rational {
    private:
        int num, denom;
        void reduce();
    public:
        Rational() = default;
        Rational(int n, int d);
        friend ostream& operator<<(ostream&, const Rational&);
};

#endif // !RATIONAL_H