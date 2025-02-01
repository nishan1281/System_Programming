// main.cpp
#include <iostream>
#include "Car.h"
#include "Engine.h"
#include "Wheel.h"
#include "Builder.h"

int main() {
    // Build the car using the builder pattern
    Car myCar = CarBuilder("Toyota", "Camry", 2024)
            .addWheel(17, "Alloy")
            .addWheel(17, "Alloy")
            .addWheel(17, "Alloy")
            .addWheel(17, "Alloy")
            .build();

    // Print car details
    myCar.printDetails();

    return 0;
}
