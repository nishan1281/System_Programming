//
// Created by nisha on 2/3/2024.
//

#include "iostream"

int fact (int num){
    //base case
    if (num ==  1)
    {
        return 1;
    }

    //recursive case
    else{
        return num * fact(num-1);
    }
}

int main (){
    std::cout << fact(5) <<std::endl;

    return 0;
}
