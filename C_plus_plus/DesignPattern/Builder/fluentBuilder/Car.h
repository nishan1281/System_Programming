// Car.h
#ifndef CAR_H
#define CAR_H

#include "Engine.h"
#include "Wheel.h"
#include <string>
#include <vector>

class Car {
protected:
    Engine engine;  // Composition: Car has an Engine
    std::vector<Wheel> wheels;  // Composition: Car has multiple Wheels
    std::string make;
    std::string model;
    int year;

public:
    Car(const std::string &make, const std::string &model, int year,const Engine &engine, const std::vector<Wheel> &wheels)
            : make(make), model(model), year(year), engine(engine), wheels(wheels) {}

    void printDetails() {
        std::cout << "Car Make: " << make << ", Model: " << model << ", Year: " << year << std::endl;
        engine.printDetails();
        for (const auto& wheel : wheels) {
            wheel.printDetails();
        }
    }
};

#endif // CAR_H
