//
// Created by nisha on 3/26/2024.
//

#include "iostream"
#include "fstream"

int main(){
    std::ofstream outputFile;
    outputFile.open("file.txt", std::fstream::app);

    if (!outputFile){
        std::cout << "Could not open file \n";
        return -1;
    }

    outputFile << "\n some more data";
    outputFile.close();
}