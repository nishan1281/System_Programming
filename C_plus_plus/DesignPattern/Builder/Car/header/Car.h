//
// Created by nisha on 11/29/2024.
//

//Step 1: Define the Product (Car)
// The Car class is the product being built. It contains various attributes and methods.

#ifndef CAR_H
#define CAR_H

#include <string>
#include <vector>
#include "iostream"

class Car
{
public:
    std::string engine;
    std::vector<std::string> wheels;
    std::string seats;
    std::string airConditioning;

    void display () const;
};



#endif //CAR_H
