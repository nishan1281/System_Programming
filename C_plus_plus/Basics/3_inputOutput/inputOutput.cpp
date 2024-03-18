//
// Created by nisha on 2/3/2024.
//
#include "iostream"

int main(){

    std::cout <<"Please enter your name and then age: ";
    int age;
    std::string name;
    std::cin >> name >> age ;

    std::cin.ignore();  //it is used as cin will not work in next line due to same buffer.
                       // next cin calling will think OH! cin is used already so skip it

    std::cout <<"Enter your description: ";
    std::string desc;
    std::getline(std::cin, desc);

    std::cout << name << ", You are " << age << " years old" << std::endl;
    std::cout << "Your Description: " << desc <<std::endl;
    return 0;
}