//
// Created by nisha on 3/16/2024.
//

#include "iostream"

class MyClass{
private:
    int data;

public:

    //constructor
    MyClass(int data_) : data(data_){
        std::cout << "Original Constructor:" << data_ <<":"<< this->data << std::endl;
    }

    //copy constructor
    MyClass (const MyClass& other) : data (other.data){
        other.data + 1;
        std::cout << "Copy constructor: " << other.data <<":"<< this->data <<std::endl;
    }

    int getData() const {
        return this->data;
    }

};

int main(){
    MyClass original (5);

    //creating copy:
    MyClass copy = original;

    // Accessing data of the original and copied objects
    std::cout << "Original data: " << original.getData() << std::endl;
    std::cout << "Copied data: " << copy.getData() << std::endl;
}