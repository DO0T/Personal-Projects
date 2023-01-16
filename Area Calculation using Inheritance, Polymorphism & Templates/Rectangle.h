#ifndef RECTANGLE_H_
#define RECTANGLE_H_
#include "Shape.h"

// Derived class from parent Shape Class
template<typename T> class Rectangle : public Shape<T> {
    private:
        double length{0};
        double width{0};
    public:
        Rectangle() = default;
        Rectangle(double length, double width) : Shape<T>("Rectangle"), length{length}, width{width} {}
        virtual T getArea() const override {
            return length * width;
        }
};

#endif // !RECTANGLE_H
