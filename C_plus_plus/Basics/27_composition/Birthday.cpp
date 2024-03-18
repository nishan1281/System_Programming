//
// Created by nisha on 2/7/2024.
//

#include "iostream"
#include "Birthday.h"

Birthday::Birthday(int d, int m, int y) {

    this->day = d;
    this->month = m;
    this->year = y;
}

void Birthday::printDate() {
    std::cout << this->day << "/" << month << "/" << year << std::endl;
}
