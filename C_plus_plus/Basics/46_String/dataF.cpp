//
// Created by nisha on 3/23/2024.
//

#include "iostream"
#include "string"
#include "vector"

void printV (int *arr, size_t size){
    for (int i = 0; i <size ; ++i) {
        std::cout << arr[i] << ", " ;
    }
}

int main (int argc, const char *argv[]){

    std::vector<int> numbers{1,2,5,7,8,9};

    printV(numbers.data(), numbers.size());
}
