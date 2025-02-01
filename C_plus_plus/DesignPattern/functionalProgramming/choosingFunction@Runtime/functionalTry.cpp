//
// Created by nisha on 12/17/2024.
//

#include "iostream"

void applyFunction(int x, int (*function) (int)){
    std::cout << function(x) << std::endl;
}

int square (int a){
    return a*a;
}

int cube (int a){
    return a*a*a;
}

int main(){

    applyFunction(3,square);
    applyFunction(3,cube);
}