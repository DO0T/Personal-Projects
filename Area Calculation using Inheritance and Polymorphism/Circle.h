#ifndef CIRCLE_H_
#define CIRCLE_H_
#include "Shape.h"

// Derived class from Shape parent class
class Circle: public Shape {
    private:
        double radius{0};
        const double PI{3.14};
    public:
        Circle() = default;
        Circle(double radius) : Shape("Circle"), radius{radius} {}
        virtual double getArea() const override;
};

#endif
