//
// Created by nisha on 11/30/2024.
//


#include "header/Director.h"
#include "header/Car.h"
#include "header/SedanBuilder.h"
#include "header/SUVBuilder.h"


int main() {
    Director director;

    // Build a sedan
    SedanBuilder sedanBuilder;
    director.setBuilder(&sedanBuilder);
    director.constructCar();
    Car* sedan = sedanBuilder.getCar();
    sedan->display();

    // Build an SUV
    SUVBuilder suvBuilder;
    director.setBuilder(&suvBuilder);
    director.constructCar();
    Car* suv = suvBuilder.getCar();
    suv->display();

    // Cleanup
    delete sedan;
    delete suv;

    return 0;
}
