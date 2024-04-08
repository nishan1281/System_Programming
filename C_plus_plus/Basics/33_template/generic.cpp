//
// Created by nisha on 3/19/2024.
//

#include "iostream"

template <class T>
T Max (const T& t1, const T& t2){
    if (t1> t2)
        return t1;

    else
    return t2;
}

int main(){
    std::cout << Max (7.5, 7.8) << std::endl;
}