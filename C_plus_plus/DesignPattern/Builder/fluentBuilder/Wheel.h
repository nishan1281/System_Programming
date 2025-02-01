// Wheel.h
#ifndef WHEEL_H
#define WHEEL_H

#include <string>
#include <iostream>

class Wheel {
public:
    int size;
    std::string type;

    Wheel(int _size, const std::string &_type) : size(_size), type(_type) {}

    void printDetails() const {
        std::cout << "Wheel size: " << size << " inches, Type: " << type << std::endl;
    }
};

#endif // WHEEL_H
