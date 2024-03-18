//
// Created by nisha on 2/6/2024.
//
#include "iostream"

#define MY_NAME "Nishan"

class Map{
private:
    int x = 15;
    mutable int y = 10;
    const int z = 5;

public:
    Map (int a, int b, int c){
        this->x = a;
        this->y = b;
        this->z = c; //not possible as z was const.
        }

        // constant can only be changed as per below format in constructor

    Map (int a, int c)
        :x(a), z(c)
        {

        }
public:
    void setPos () const{
        this->x = 10;  //not possible as this method is constant
        this->y = 100;
    }
};

int main(int argc, char const *argv[]) {
    std::cout << sizeof(int) << std::endl; //to find byte size of int

    const int AGE = 25; //constant is all capital and cannot be changed.

    std::cout << "My Name is " << MY_NAME << " and" <<
              " my age is " << AGE << std::endl;
}