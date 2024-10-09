//
// Created by nisha on 10/10/2024.
//

#pragma once

#include <string>

#include "../model/Person.h"


class PersonViewModel {
public:
    PersonViewModel(const Person& person);

    std::string getDisplayName() const;

private:
    Person person;
};
