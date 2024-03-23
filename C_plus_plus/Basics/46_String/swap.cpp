//
// Created by nisha on 3/23/2024.
//

#include "iostream"
#include "string"

int main(){

    std::string s1{"Hello"};
    std::string s2{"GoodBye"};

    s1.swap(s2);
    std::cout << "s1: " <<s1;    //s1: GoodBye

    std::swap(s1, s2);
    std::cout << "s1: " <<s1;   //s1: hello

}
