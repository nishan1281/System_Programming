//
// Created by nisha on 2/9/2024. This is similar as generic in java.
//

#include "iostream"

/*
float add(float x, float y){
    return x + y;
}

int add (int x, int y){
return x+y;
}
*/

template <class T>  //template <typename T>
T add (T x, T y){
    return x+y;
}


int main (int argc, char const *argv[]){

    add(4.4,5.5);
    add(4,5);
    return 0;
}