//
// Created by nisha on 3/24/2024.
//
#include "iostream"
#include "fstream"

int main(){

    std::ofstream outputFile{"log.txt"};

    if (!outputFile){
        std::cerr <<"not found file"<< std::endl;
        return -1;
    }

    for (int i = 0; i < 1000'000; ++i) {
        std::cout << i << "\n" << std::flush;  //we can use std::endl which gives same result
        outputFile << i << "\n" << std::flush;

        if (i==66666) std::terminate();

    }

    outputFile.close();
}
