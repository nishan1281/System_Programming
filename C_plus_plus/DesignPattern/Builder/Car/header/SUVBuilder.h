//
// Created by nisha on 11/30/2024.
//

#ifndef SUVBUILDER_H
#define SUVBUILDER_H
#include "CarBuilder.h"

class SUVBuilder : public CarBuilder
{
private:
    Car* car;

public:
    SUVBuilder();
    ~SUVBuilder();

    void buildEngine() override;
    void buildWheels() override;
    void buildSeats() override;
    void buildAirConditioning() override;

    Car* getCar() override;
};

#endif //SUVBUILDER_H
