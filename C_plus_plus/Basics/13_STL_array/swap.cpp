//
// Created by nisha on 2/4/2024.
//
#include "iostream"
#include "array"

int main (int argc, char const *argv[]){

    std::array<int, 4> ages = {52, 25, 30, 56};
    std::array<int, 4> tens = {10, 20 , 30 ,40};

//    std::cout << ages.size() << std::endl;
//    std::cout << tens.size() << std::endl;

    ages.swap(tens);

    for (auto i: ages) {
        std::cout << i << std::endl;
    }

}
