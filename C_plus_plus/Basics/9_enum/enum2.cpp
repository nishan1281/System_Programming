//
// Created by nisha on 11/16/2024.
//
#include <iostream>

enum class Fruit {
    Apple = 1,   // Custom value for Apple
    Banana,      // Automatically gets value 2
    Cherry,      // Automatically gets value 3
    Mango = 10,  // Custom value for Mango
    Orange       // Automatically gets value 11
};

int main() {
    Fruit myFruit = Fruit::Mango;

    if (myFruit == Fruit::Mango) {
        std::cout << "You selected Mango with a value of: " << static_cast<int>(myFruit)<< std::endl;
    }

    return 0;
}
