//
// Created by nisha on 4/6/2024.
//

#include <memory>

#include "iostream"
#include "Circle.h"
#include "Square.h"

int main(){

    // Circle circle(5.0);
    // Square square(4.0);
    //
    // std::cout<< circle.calculateArea() <<std::endl;
    // std::cout<< square.calculateArea() <<std::endl;


/*using smart pointer*/
    // Creating another shared_ptr that shares ownership of the same Rectangle object
    // std::shared_ptr<Rectangle> rect2 = rect1;  // rect2 now shares ownership of the same Rectangle
    //It is also possible to asign with unique pointer as below way-
    //std::unique_ptr<Circle> circle1 = std::move(circle);


    std::unique_ptr<Circle> circle = std::make_unique<Circle>{5.0};
    std::unique_ptr<Square> square = std::make_unique<Square>{4.0};

    std::cout<<circle->calculateArea()<<std::endl;
    std::cout<<square->calculateArea()<<std::endl;



    return 0;
}