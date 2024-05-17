//
// Created by nisha on 3/23/2024.
//

#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inputFile{"file.txt"};  //ifstream variable bound to text


    // Reading words
    if (inputFile.is_open()) {  //checking if file is successfully  opened.
        std::cout << "Words from the file:" << std::endl;
        std::string word;
        while (inputFile >> word) {  //read a word from the file
            std::cout << word << ", ";
        }
        std::cout << std::endl;

        inputFile.close(); // Close the file before reopening for reading lines
    } else {
        std::cerr << "Error opening the file." << std::endl;
        return 1;
    }

    // Reopening the file to read lines
    inputFile.open("file.txt");
    if (inputFile.is_open()) {
        std::cout << "\nLines from the file:" << std::endl;
        std::string line;
        while (getline(inputFile, line)) {
            std::cout << line << std::endl;
        }
        inputFile.close();
    } else {
        std::cerr << "Error opening the file." << std::endl;
        return 1;
    }

    return 0;
}
