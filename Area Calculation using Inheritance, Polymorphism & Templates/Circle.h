#ifndef CIRCLE_H_
#define CIRCLE_H_
#include <cmath>
#include "Shape.h"

// Derived class from Shape parent class
template<typename T> class Circle : public Shape<T> {
    private:
        double radius{0};
        const double PI{3.14};
    public:
        Circle() = default;
        Circle(double radius) : Shape<T>("Circle"), radius{radius} {}
        virtual T getArea() const override {
            return PI * pow(radius, 2);
        }
};

#endif
