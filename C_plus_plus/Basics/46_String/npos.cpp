//
// Created by nisha on 3/22/2024.
//
#include "iostream"
#include "string"


int main(){
    std::string str {"Hello, World"};

    size_t pos = str.find('o');

    if (pos != std::string::npos){
        std::cout << "Found at position: " << pos << std::endl;
    } else{
        std::cout << "Could not pos \n";
    }

    str[pos] = 'l';
    std::cout << str << std::endl;
}

