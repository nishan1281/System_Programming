//
// Created by nisha on 2/21/2024.
//

#include "iostream"
#include "string"

class Car {

private:
    std::string model;

public:
    Car (const std::string& model_) {
        this->model = model_;
    }

    std::string GetModel () const {
        return model;
    }

    bool operator == (const Car& other_car) const{
        return this->GetModel() == other_car.GetModel();
    }

};

int main (){
    Car car1("Toyota");
    Car car2("Honda");
    Car car3 ("Toyota");

    if (car1 == car2){
        std::cout << "Cars are similar" << std::endl;
    } else{
        std::cout << "cars not similar" << std::endl;
    }
}