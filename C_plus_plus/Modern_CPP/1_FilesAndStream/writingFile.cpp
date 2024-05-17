//
// Created by nisha on 2/4/2024.
//
#include "iostream"
#include "fstream"

int main (int argc, char const *argv[]){

    std::ofstream myFile;

    //to make new file and write or replace text.
//    myFile.open("lol.text");
//
//    if (myFile.is_open()){
//        myFile << "Hello changed text" <<std::endl;
//    } else{
//        std::cout << "No write permission" << std::endl;
//    }

//    myFile <<"Hello Nishan" <<std::endl;

    //to write new line
    //---------------------------------------

    myFile.open("lol.text", std::ios::app);
    if (myFile.is_open()){
        myFile << "new text included" <<std::endl;
    } else{
        std::cout << "No write permission" << std::endl;
    }

    myFile.close();
}