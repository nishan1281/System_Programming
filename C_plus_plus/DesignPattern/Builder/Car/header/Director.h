//
// Created by nisha on 11/30/2024.
//

#ifndef C_PLUS_PLUS_DIRECTOR_H
#define C_PLUS_PLUS_DIRECTOR_H

#include "CarBuilder.h"

class Director{

private:
    CarBuilder*  builder;

public:
    void setBuilder (CarBuilder* newBuilder);
    void constructCar();
};

#endif //C_PLUS_PLUS_DIRECTOR_H
