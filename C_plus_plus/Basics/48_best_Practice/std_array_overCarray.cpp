//
// Created by nisha on 5/4/2024.
//
//5. using std array over C array

#include "iostream"
#include "array"

int main(){

    //std:array format:
    std::array <int, 5> stdArray = {1,2,3,4,5};

    std::cout << "modern std::array =";
    //range based modern for-loop without direct access.
    for(const auto &x : stdArray){
        std::cout << x << " ";
    }
    std::cout << std::endl;

    //normal format:
    int cArray[5] = {1,22,73,4,90};

    std::cout << "normal c-style array =";
    //range based legacy for loop
    for (int i : cArray) {
        std::cout << i << " ";
    }

}