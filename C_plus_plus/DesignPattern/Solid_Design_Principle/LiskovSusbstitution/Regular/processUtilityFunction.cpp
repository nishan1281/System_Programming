//
// Created by nisha on 10/13/2024.
//

#include "Rectangle.h"
#include "processUtilityFunction.h"

void process (Rectangle& r)
{
    int w = r.get_width();
    r.set_height(10);

    std::cout << "expected area = " << (w*10) << ", got "<< r.area()<<std::endl;

}