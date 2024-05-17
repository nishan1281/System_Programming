//
// Created by nisha on 5/14/2024.
//

#include "iostream"
#include "iomanip"

int main(){
    std::cout << std::setfill('#');
    std::cout << std::left << std::setw(15) << "Penguins see " << 5 << std::endl;
    std::cout << std::setw(15) << "PolarBears " << 5 << std::endl;
}