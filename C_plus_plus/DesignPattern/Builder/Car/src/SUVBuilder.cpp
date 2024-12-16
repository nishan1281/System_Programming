//
// Created by nisha on 11/30/2024.
//

#include "../header/SUVBuilder.h"

SUVBuilder::SUVBuilder(): car(new Car()){};

void SUVBuilder::buildEngine() {
    car->engine = "SUV engine";
}

void SUVBuilder::buildWheels() {
    car->wheels = {"17 inch front-left", "17 inch front-right", "17 inch back-left", "17 inch back-right"};
}

void SUVBuilder::buildSeats() {
    car->seats = "Cotton Fabric with leather";
}

void SUVBuilder::buildAirConditioning() {
    car->airConditioning = "LG AC";
}

Car* SUVBuilder::getCar(){
    return car;
}