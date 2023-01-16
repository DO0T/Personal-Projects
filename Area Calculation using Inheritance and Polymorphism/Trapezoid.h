#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_
#include "Shape.h"

// Derived class from parent Shape Class
class Trapezoid: public Shape {
    private:
        double base1{0};
        double base2{0};
        double height{0};
    public:
        Trapezoid() = default;
        Trapezoid(double base1, double base2, double height) : Shape("Trapezoid"), base1{base1}, base2{base2}, height{height} {}
        virtual double getArea() const override;
};

#endif
