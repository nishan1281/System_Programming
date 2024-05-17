#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

// Define a Square class
class Square : public Shape<Square> {
private:
    double sideLength;

public:
    Square(double sideLength) : sideLength(sideLength) {}

    double area() const {
        return sideLength * sideLength;
    }
};

#endif // SQUARE_H
