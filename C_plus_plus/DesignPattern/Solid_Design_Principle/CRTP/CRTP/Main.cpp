//
// Created by nisha on 4/20/2024.
//
#include <iostream>
#include "Circle.h"
#include "Square.h"
#include <memory>
/*code duplication primarily occurs at compile-time due to templates and inlining, while runtime is about
  executing the already compiled code without generating new instances.
  The Curiously Recurring Template Pattern (CRTP) helps reduce code duplication by allowing the base
  class to operate on the derived class without creating multiple instances of the template for each derived type. */

int main() {
    // Create objects of Circle and Square
    // Circle circle(5.0);
    // Square square(4.0);
    //
    // // Calculate and print areas
    // std::cout << "Area of Circle: " << circle.calculateArea() << std::endl;
    // std::cout << "Area of Square: " << square.calculateArea() << std::endl;
    std::unique_ptr<Circle> circle = std::make_unique<Circle>(5.0);
    std::unique_ptr<Square> square = std::make_unique<Square>(4.0);

    std::cout<<circle->calculateArea()<<std::endl;
    std::cout<<square->calculateArea()<<std::endl;

    return 0;
}


