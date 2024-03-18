//
// Created by nisha on 2/4/2024.
//
#include "iostream"

int main (int argc, char const *argv[]){
    std::string friends[5] = {"nishan 1", "nishan 2", "nishan 3", "nishan 4", "nishan 5"};
    int arraySize = sizeof (friends)/sizeof (friends[0]);

    int count = -1;
    while (count < arraySize - 1){
        count++;

        if (count == 2){
            continue;   //continue will skip the friend[3]
        }

        std::cout << friends[count] << std::endl;
    }

    return 0;
}
