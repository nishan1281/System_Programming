//
// Created by nisha on 10/10/2024.
//

#pragma once

#include <string>

class Person {
public:
    Person(const std::string& name, int age);

    std::string getName() const;
    int getAge() const;

private:
    std::string name;
    int age;
};

