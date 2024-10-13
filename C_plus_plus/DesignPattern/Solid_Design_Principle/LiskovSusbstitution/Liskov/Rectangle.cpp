//
// Created by nisha on 10/13/2024.
//
#include "Rectangle.h"

Rectangle::Rectangle(int width, int height) : width(width), height(height) {}

     int Rectangle::get_width() const
     {
         return width;
     }

     void Rectangle::set_width(int width)
     {
         this->width = width;
     }

     int Rectangle:: get_height() const
     {
         return height;
     }

     void Rectangle::set_height(int height)
     {
         this->height = height;
     }

     int Rectangle::area () const
     {
         return width*height;
     }

