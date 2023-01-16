#ifndef SQUARE_H_
#define SQUARE_H_
#include "Shape.h"

// Derived class from parent Shape Class
template<typename T> class Square : public Shape<T> {
    private:
        double side{0};
    public:
        Square() = default;
        Square(double side) : Shape<T>("Square"), side{side} {}
        virtual T getArea() const override {
            return side * side;
        }
};

#endif
