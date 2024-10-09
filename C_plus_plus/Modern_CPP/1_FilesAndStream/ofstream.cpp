//
// Created by nisha on 3/23/2024.
//
#include <iostream>
#include <fstream>


int main() {
    // Open a file for writing. std::ios::app used to append new text
    std::ofstream outputFile("lol.txt", std::ios::app);

    // Check if the file is successfully opened
    if (outputFile.is_open()) {
        std::cout << "File is open for writing." << std::endl;

        // Perform file writing operations
        outputFile << "Hello, world! new text" << std::endl;

        // Close the file when done writing
        outputFile.close();
    } else {
        // Print an error message to standard error stream if file opening fails
        std::cerr << "Failed to open file for writing." << std::endl;
    }

    return 0;
}
