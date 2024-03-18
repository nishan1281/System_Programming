//
// Created by nisha on 2/4/2024.
//
#include "iostream"

namespace stuffs
{
    int sum (int x, int y){
        return x+y;
    }
}

int main (int argc, char const *argv[]){
    std::cout << stuffs::sum(10, 9) << std::endl;
}