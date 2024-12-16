//
// Created by nisha on 11/30/2024.
//

#ifndef SEDANBUILDER_H
#define SEDANBUILDER_H

#include "CarBuilder.h"

class SedanBuilder : public CarBuilder
{
private:
    Car* car;

public:
    SedanBuilder();
    ~SedanBuilder();

    void buildEngine() override;
    void buildWheels() override;
    void buildSeats() override;
    void buildAirConditioning() override;

    Car* getCar() override;
};

#endif //SEDANBUILDER_H
