//
// Created by nisha on 2/4/2024. for Un ordered data
//
#include "iostream"
#include "set"

int main (int argc, char const *argv[]){

    std::set<char> alpha = {'a', 'b', 'v', 'a', 'v', 'd'};

    if (alpha.find('p')!= alpha.end()){
        std::cout << "Item found!" << std::endl;
    } else{
        std::cout << "item not found" << std::endl;
    }


    for (std::set<char>::iterator i = alpha.begin(); i!=alpha.end(); i++){
        std::cout << *i <<std::endl;
    }
}
