//
// Created by nisha on 2/3/2024.
//

#include "iostream"

int main (int argc, char const *argv[]){

    int dayOfWeek = 2;
    std::string day;

    switch (dayOfWeek) {
        case (1):
            day = "Monday";
            break;

        case (2):
            day = "Tuesday";
            break;

        default:
            day = "Friday";
            break;
    }

    std::cout << "Today is: " << day << std::endl;
}