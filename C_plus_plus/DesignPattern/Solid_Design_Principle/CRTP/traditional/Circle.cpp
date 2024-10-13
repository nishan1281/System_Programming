//
// Created by nisha on 4/6/2024.
//
#include "Circle.h"


Circle::Circle(double _radius): radius(_radius) {}

double Circle::calculateArea() const {
    return 3.14 * radius * radius;
}

