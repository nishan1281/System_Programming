//
// Created by nisha on 2/4/2024. Vector can be used for different size array declaration
//
#include "iostream"
#include "vector"



int main (int argc, char const *argv[]){

    std::vector<int> ages = {52, 25, 30, 56};
    ages.push_back(59);  //to add

    //ages.resize(5); //to resize vector ages.
    //ages.clear(); clear everything

    std::cout <<"accessing data: " <<ages[1]<<std::endl;

    for (auto i: ages) {
        std::cout << i << std::endl;
    }

    std::cout <<"-------------" <<std::endl;


    std::vector <std::vector <int>> height = {
            {2,5,5},
            {2,5},
            {2,6,5,4}   //as vector inside vector have no definite size till defined
    };

    for (std::vector<int> v: height){
        for (auto i:v) {
            std::cout << i << " ";
        }
        std::cout <<"\n--------------" <<std::endl;
    }

    return 0;
}
