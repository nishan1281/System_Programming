//
// Created by nisha on 10/13/2024.
//
 #pragma once

#include "Rectangle.h"

class Square : public Rectangle
{

public:
    explicit Square(int size);

    void set_width(int _width) override;
    void set_height(int _height) override;
};