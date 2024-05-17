//
// Created by nisha on 4/20/2024.
//
#include <iostream>
#include "Circle.h"
#include "Square.h"

int main() {
    // Create objects of Circle and Square
    Circle circle(5.0);
    Square square(4.0);

    // Calculate and print areas
    std::cout << "Area of Circle: " << circle.calculateArea() << std::endl;
    std::cout << "Area of Square: " << square.calculateArea() << std::endl;

    return 0;
}


