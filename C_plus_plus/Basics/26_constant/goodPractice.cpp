//
// Created by nisha on 2/23/2024.
//
#include <iostream>

class MyClass {
private:
    int privateVar;

public:
    MyClass(int value) : privateVar(value) {}

    // Const member function accessing private variable is a good practice
    int getPrivateVar() const {
        return privateVar;
    }
};

int main() {
    const MyClass obj(10); // Const object good practice

    // Accessing private variable using const member function
    std::cout << "Private variable value: " << obj.getPrivateVar() << std::endl;

    return 0;
}
