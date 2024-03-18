//
// Created by nisha on 2/4/2024.
//
#include "iostream"
#include "cstdlib"
#include "ctime"

int main (){
    //time(0) is the current time in seconds since the
    //Epoch (00:00:00 Coordinated Universal Time (UTC), January 1, 1970)
    //this is the seed for rand() 15_function.

    std::srand(time(0));
    std::cout << std::rand() << std::endl;

    //to get number from 0 to 9
    std::cout << (std::rand()%10) << std::endl;

    //to get number from 0 to 10
    std::cout << (std::rand()%10)+1 << std::endl;
}