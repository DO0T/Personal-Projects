#ifndef SQUARE_H_
#define SQUARE_H_
#include "Shape.h"

// Derived class from parent Shape Class
class Square: public Shape {
    private:
        double side{0};
    public:
        Square() = default;
        Square(double side) : Shape("Square"), side{side} {}
        virtual double getArea() const override;
};

#endif
