//
// Created by nisha on 3/19/2024.
//

#include "iostream"

int multiply (int a, int b){return a*b;}

int main(){

    int (*func)(int , int );  //pointing to the multiply function address

    func = multiply;

    int result = func(15,2);
    std::cout << result << std::endl;

    return 0;

}