// Engine.h
#ifndef ENGINE_H
#define ENGINE_H

#include <string>
#include <iostream>

class Engine {
public:
    std::string engineType;
    int horsepower;

    Engine(const std::string &_engineType, int _horsepower)
            : engineType(_engineType), horsepower(_horsepower) {}

    void printDetails() const {
        std::cout << "Engine: " << engineType << ", Horsepower: " << horsepower << std::endl;
    }
};

#endif // ENGINE_H
