//
// Created by nisha on 11/30/2024.
//

#include "../header/Car.h"

void Car::display() const {

    std::cout << "Car Details:\n";
    std::cout << "Engine: " << engine << "\n";
    std::cout << "Wheels: ";
    for (const auto& wheel : wheels) {
        std::cout << wheel << " ";
    }
    std::cout << "\nSeats: " << seats << "\n";
    std::cout << "Air Conditioning: " << airConditioning << "\n";
}
