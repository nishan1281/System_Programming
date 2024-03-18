//
// Created by nisha on 2/4/2024.
//
#include "iostream"
#include "vector"
#include "algorithm"

bool compareF(int a, int b){
        return a>b;
    }

int main (int argc, char const *argv[]){

    std::vector<int> numbers = {6,5,3,2,6,8,7};
    std::sort(numbers.begin(), numbers.end(), compareF);

    for (int i:numbers) {

        std::cout << i << std::endl;

    }

}