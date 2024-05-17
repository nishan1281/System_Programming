//
// Created by nisha on 5/17/2024.
//


#include "iostream"
#include "sstream"
#include "string"

int main(){

    std::ostringstream output;                   //opening output stream
    std::string data{"It is time to say"};
    output << data;                              //writing data to the stream

    auto marker = output.tellp();     //save current file position marker
    std::cout << data.size() << " characters written to stream \n";
    std::cout << "Stream maker is " << marker << " bytes into the stream \n";

    output << " hello";
    std::cout << "Stream maker is now " << output.tellp() << " bytes into the stream \n";
    std::cout <<output.str() <<std::endl;  //to print full string stream

    if (marker!=-1)          //checking validity as it is a format
    output.seekp(marker);   //move marker back to original position
    output<< " goodnight";
    std::cout <<output.str() <<std::endl;  //to print full string stream

}