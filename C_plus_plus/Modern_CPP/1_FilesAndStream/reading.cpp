//
// Created by nisha on 2/4/2024.
//
#include "iostream"
#include "fstream"

int main (int argc, char const *argv[]){

    std::string line;
    std::fstream myFile ("file.txt");

//    getline (myFile, line);
//    next line
//    getline (myFile, line);

    while (getline(myFile, line)){
        std::cout << line << std::endl;
    }
    myFile.close();
}