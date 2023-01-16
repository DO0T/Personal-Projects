#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_
#include "Shape.h"

// Derived class from parent Shape Class
template<typename T> class Trapezoid : public Shape<T> {
    private:
        double base1{0};
        double base2{0};
        double height{0};
    public:
        Trapezoid() = default;
        Trapezoid(double base1, double base2, double height) : Shape<T>("Trapezoid"), base1{base1}, base2{base2}, height{height} {}
        virtual T getArea() const override {
            return ((base1 + base2) / 2) * height;
        }
};

#endif
