// Builder.h
#ifndef BUILDER_H
#define BUILDER_H

#include "Car.h"

class CarBuilder : public Car {
public:
    // Constructor to initialize with basic attributes
    CarBuilder(const std::string& make, const std::string& model, int year)
            : Car(make, model, year, Engine("V6", 300), {}) {}  // Default engine and empty wheels


    // Method to add a wheel
    CarBuilder& addWheel(int size, const std::string& type) {
        this->wheels.emplace_back(size, type);  // Use inherited wheels vector
        return *this;
    }

    // Final build method
/*    The build() method gathers all the data that has been set or modified
      during the building process and uses it to create a fully constructed
      Car object.
      It ensures that the construction logic (e.g., combining the make,
      model, year, engine, and wheels) is centralized in one place. */



    Car build() const {
        // Return a Car instance with the current state
        return Car(make, model, year, engine, wheels);
    }
};

#endif // BUILDER_H
