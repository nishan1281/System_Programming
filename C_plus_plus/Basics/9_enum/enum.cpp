//
// Created by nisha on 2/4/2024.
//
#include "iostream"

enum ErrorNum {
    A,  //0 in normal
    B,  //1 as after A
    C,  //2 as after A
    D = 99, //99
    E,      // 100 as after D
    F,
    G
};

int main (int argc, char const *argv[]){
    ErrorNum err = G;
    std::cout <<  "Error No: " << err << std::endl;

    return 0;
}