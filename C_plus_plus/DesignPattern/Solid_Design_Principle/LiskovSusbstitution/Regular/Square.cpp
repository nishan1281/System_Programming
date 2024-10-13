//
// Created by nisha on 10/13/2024.
//

#include "Square.h"

 Square::Square(int size) : Rectangle(size, size){}

 void Square::set_width(int _width)
    {
        this->width = this->height = _width;
    };

void Square::set_height(int _height)
    {
        this->width = this->height = _height;
    };



