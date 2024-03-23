//
// Created by nisha on 3/22/2024.
//
#include "iostream"
#include "string"

int main (int argc, char const *argv[]){

    std::string hello{"Hello"};

    auto first= begin(hello);
    hello.erase(first);
    std::cout << hello <<std::endl;

    hello.erase(2, 3);
    std::cout << hello <<std::endl;

}