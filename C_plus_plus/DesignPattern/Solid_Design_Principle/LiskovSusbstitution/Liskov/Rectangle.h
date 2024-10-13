//
// Created by nisha on 10/13/2024.
//

#pragma once
#include "Rectangle.h"

class Rectangle
{
public:
    Rectangle(int width, int height);

    int get_width() const;

   virtual void set_width(int width);

    int get_height() const;

    virtual void set_height(int height);

    int area () const;

protected:
    int width, height;

};
