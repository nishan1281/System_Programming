//
// Created by nisha on 3/24/2024.
//

#include "iostream"

int main (){
    std::cout << "Enter some text: " << std::endl;
    char c;
    while (std::cin.get(c))  //read character until we get end-of-input
        std::cout.put(c);       //display the character
}