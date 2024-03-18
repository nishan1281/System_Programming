//
// Created by nisha on 3/16/2024.
//

#include "iostream"

class MyClass{

private:
    int data;

public:
    MyClass (int value) : data(value){}

    // Assigning an object from another using *this pointer
    MyClass& assignFrom (const MyClass& other){  //MyClass& specifies return type of the function
        data = other.data;  //copy data from other object
        return *this; // Return a reference to the current object
    }

    int getData() const{  //this method cannot modify member variable without 'mutable'

        return data;
    }
};

int main(){

    //creating original and target objects
    MyClass original(5);
    MyClass target (10);

    //assigning target object from the original object
    target.assignFrom(original);

    // Accessing data of the original and target objects
    std::cout << "Original data: " << original.getData() << std::endl;  //output 5
    std::cout << "Target data: " << target.getData() << std::endl;  //output 5

    return 0;
}