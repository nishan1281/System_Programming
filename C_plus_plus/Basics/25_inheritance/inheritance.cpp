//
// Created by nisha on 2/5/2024.
//
#include "iostream"

class Car {

private:
    std::string brand = "Toyota";  //you can not access by child class Truck.

protected:
    int wheel = 4;
    // you can modify wheel by child class only as inherited. But with setter method only.
    // also to access getter is required.

public:
    double calculateFuel (int km){
        return km/2;
    }

    int getWheel(){
        return this->wheel;
    }
};

class Truck : public Car{
public:
    double calculateLoad(double width){
        return  width * 2;
}
    double calculateFuel (int km){
        return km/11;
    }

    //setter method to change protected wheel of parent class.
    void setWheel (int wheels){
        this->wheel = wheels;
    }

};

int main (int argc, char const *argv[]){
    Truck myTruck;
    //myTruck.wheel = 6; it is not possible
    myTruck.setWheel(10);

    std::cout << myTruck.calculateFuel(22)<<std::endl;
    std::cout << myTruck.getWheel() << std::endl;
}
