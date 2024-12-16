//
// Created by nisha on 11/30/2024.
// Step 2: Define the Builder Interface
// This interface declares methods for creating parts of a product.
//

#ifndef CARBUILDER_H
#define CARBUILDER_H

#include "Car.h"

class CarBuilder
{
public:
    virtual ~CarBuilder() = default;

    virtual void buildEngine() = 0;
    virtual void buildWheels() = 0;
    virtual void buildSeats() = 0;
    virtual void buildAirConditioning() = 0;

    virtual Car* getCar() = 0;

};

#endif //CARBUILDER_H
