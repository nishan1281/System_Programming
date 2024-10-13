//
// Created by nisha on 10/13/2024.
//

#include "RectangleFactory.h"


Rectangle RectangleFactory::create_rectangle(int w, int h)
{
    return {w,h};
}

Rectangle RectangleFactory::create_square(int size)
{
    return {size, size};
}

