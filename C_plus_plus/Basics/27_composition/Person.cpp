//
// Created by nisha on 2/7/2024.
//

#include "iostream"
#include "Person.h"

Person::Person (std::string n, Birthday d)
: name(n), dateOfBirth(d)
//this format is required to use one object in another object. Similar as constant.
// this is called  "initializer list constructor".
{

}

void Person::toString(){
    std::cout << name << " was born on " <<std::endl;
    dateOfBirth.printDate();
};