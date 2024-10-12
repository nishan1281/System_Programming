//
// Created by nisha on 4/20/2024.
//

#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle: public Shape<Circle>{

private:
    double radius;

public:
    explicit Circle(double _radius) : radius(_radius) {}

    double area() const{
        return 3.14*radius*radius;
    }

};

#endif
