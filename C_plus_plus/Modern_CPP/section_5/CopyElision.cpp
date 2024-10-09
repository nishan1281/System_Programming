//
// Created by nisha on 7/13/2024.
//
#include "iostream"

class Test
{
private:
    int value;


public:
    Test(): value(0)
    {
        std::cout << "Default constructor: " << value <<"\n";
    }

    //copy constructor
    Test(const Test& other): value(other.value)
    {
        std::cout << "copying" << value <<"\n";
    }
};

//function returning temporary object
Test func()
{
    Test test;
    return test;
}

int main()
{
    std::cout<< "calling func()" <<std::endl;
    // This will call the default constructor and compiler will not call copy constructor
    Test temp = func();  //out: Default constructor: 0
    //Test test = temp;   // This line will call the copy constructor
}