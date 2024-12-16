#include "../header/SedanBuilder.h"

//
// Created by nisha on 11/30/2024.
//
SedanBuilder::SedanBuilder(): car (new Car()){}

void SedanBuilder::buildEngine() {
    car->engine = "Sedan Engine";
}

void SedanBuilder::buildWheels() {
    car->wheels = {"16 inch front-left", "16 inch front-right", "16 inch back-left", "16 inch back-right"};
}

void SedanBuilder::buildSeats() {
    car->seats = "Fabric";
}

void SedanBuilder::buildAirConditioning() {
    car->airConditioning = "GREE Setting";
}

Car* SedanBuilder::getCar() {
    return car;
}
