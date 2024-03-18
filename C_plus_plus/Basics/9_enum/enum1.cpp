//
// Created by nisha on 2/4/2024.
//
#include "iostream"

int main (int argc, char const *argv[]){
    enum Element{
        water = 99,
        fire = 103,
        none
    };

    Element me = Element::fire;
    std::cout << me << std::endl;

    switch (me) {

        case Element::water:
            std::cout <<"I am of the water vendor" <<std::endl;
            break;


        case Element::fire:
            std::cout <<"I am of the fire vendor" <<std::endl;
            break;

        default:
            std::cout <<"error" <<std::endl;
    }
}