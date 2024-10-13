//
// Created by nisha on 4/6/2024.
//

#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape{

private:
    double radius;

public:
    explicit Circle (double _radius);

    double calculateArea() const override;

};

#endif

