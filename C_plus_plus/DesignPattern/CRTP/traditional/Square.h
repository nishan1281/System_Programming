//
// Created by nisha on 4/6/2024.
//

#ifndef C_PLUS_PLUS_SQUARE_H
#define C_PLUS_PLUS_SQUARE_H

#include "Shape.h"

class Square : public Shape{

private:
    double length;

public:
    explicit Square (double _length);

    double calculateArea() const override;

};

#endif //C_PLUS_PLUS_SQUARE_H
