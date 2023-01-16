#ifndef RECTANGLE_H_
#define RECTANGLE_H_
#include "Shape.h"

// Derived class from parent Shape Class
class Rectangle: public Shape {
    private:
        double length{0};
        double width{0};
    public:
        Rectangle() = default;
        Rectangle(double length, double width) : Shape("Rectangle"), length{length}, width{width} {}
        virtual double getArea() const override;
};

#endif // !RECTANGLE_H
