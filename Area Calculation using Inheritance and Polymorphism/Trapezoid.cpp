#include "Trapezoid.h"

// implement getArea()
double Trapezoid::getArea() const {
    return ((base1 + base2) / 2) * height;
}

