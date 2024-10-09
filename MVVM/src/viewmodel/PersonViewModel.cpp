//
// Created by nisha on 10/10/2024.
//

#include "../../include/viewmodel/PersonViewModel.h"

PersonViewModel::PersonViewModel(const Person& person) : person(person) {}

std::string PersonViewModel::getDisplayName() const {
    return "Name: " + person.getName() + ", Age: " + std::to_string(person.getAge());
}