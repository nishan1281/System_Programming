//
// Created by nisha on 3/22/2024.
//

#include "iostream"
#include "string"

int main(int argc, const char *argv[]){

    std::string str{"say Hello"};
    std::cout << "str = " << str << std::endl;

    auto gdx = str.find('H') ; //where to replace

    if (gdx != std::string::npos) //checking valid index
    str.replace(gdx, 5, "GoodBye");  //gdx = starting point,
    // 5 = 5 ward to replace as Hello consists of five words,
    //what will be used to replace

    std::cout << "str = " << str << std::endl;  //output: str = say GoodBye

    std::string pi{"3.14159"};
    size_t numberSize;
    std::cout <<stod(pi, &numberSize) <<std::endl;
    std::cout << numberSize << std::endl;
}
