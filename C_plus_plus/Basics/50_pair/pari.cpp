//
// Created by nisha on 12/28/2024.
//
#include <iostream>
#include <utility>

int main() {
    std::pair<int, std::string> myPair; // Declares a pair
    myPair = std::make_pair(1, "Apple"); // Initializes the pair

    std::cout << "First: " << myPair.first << ", Second: " << myPair.second << std::endl;

    // Direct initialization
    std::pair<int, std::string> anotherPair(2, "Banana");
    std::cout << "First: " << anotherPair.first << ", Second: " << anotherPair.second << std::endl;

    return 0;


}

