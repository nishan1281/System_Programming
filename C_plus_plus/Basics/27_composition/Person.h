//
// Created by nisha on 2/7/2024.
//

#ifndef PERSON_H
#define PERSON_H

#include "Birthday.h"
#include "string"

class Person{

private:
    std::string name;
    Birthday dateOfBirth;

public:
    Person (std::string n, Birthday d);

    void toString();
};



#endif
