//
// Created by nisha on 10/13/2024.
//

#pragma once
#include "Rectangle.h"


class RectangleFactory {
public:
    static Rectangle create_rectangle (int w, int h);
    static Rectangle create_square (int size);
};


