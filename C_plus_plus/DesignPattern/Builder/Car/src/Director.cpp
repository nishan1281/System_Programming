//
// Created by nisha on 11/30/2024.
//
#include "../header/Director.h"

void Director::setBuilder(CarBuilder* newBuilder) {
    builder = newBuilder;
}

void Director::constructCar() {
    builder->buildEngine();
    builder->buildWheels();
    builder->buildSeats();
    builder->buildAirConditioning();
}

