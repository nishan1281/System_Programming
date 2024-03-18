//
// Created by nisha on 2/23/2024.
//
#include "iostream"
#include "vector"
#include "gtest"

int main(){

    std::vector <int> vec = {1,2,3,4,5};

    //Using iterator to traverse the vector.
    std::vector <int> :: iterator it;
    for(it = vec.begin(); it!= vec.end(); ++it){
        std::cout << *it << " ";
    }

    std::cout << std::endl;

    return 0;
}
