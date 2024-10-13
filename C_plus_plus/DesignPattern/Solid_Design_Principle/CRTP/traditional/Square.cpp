//
// Created by nisha on 4/6/2024.
//
#include "Square.h"

Square::Square(double _length): length(_length) {}
double Square::calculateArea() const {
    return length*length;
}