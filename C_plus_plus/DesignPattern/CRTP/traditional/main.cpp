//
// Created by nisha on 4/6/2024.
//

#include "iostream"
#include "Circle.h"
#include "Square.h"

int main(){

    Circle circle(5.0);
    Square square(4.0);

    std::cout<< circle.calculateArea() <<std::endl;
    std::cout<< square.calculateArea() <<std::endl;


    return 0;
}