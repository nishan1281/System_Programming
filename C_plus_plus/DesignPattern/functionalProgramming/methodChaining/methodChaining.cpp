//
// Created by nisha on 12/28/2024.
//

#include <string>
#include <iostream>

class Car{
private:
    std::string make;
    std::string model;

public:
    Car& setMake(const std::string &_make){
        this->make = _make;
        return *this;
    }

    Car& setModel(const std::string &_model){
        this->model = _model;
        return *this;
    }


    void display() const {
        std::cout << "Make: " << make << ", Model: " << model << std::endl;
    }

    };

int main(){

    Car car;
    car.setMake("Toyota").setModel("Corolla").display();
}