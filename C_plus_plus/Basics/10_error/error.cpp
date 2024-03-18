//
// Created by nisha on 2/4/2024.
//
#include "iostream"

int main (int argc, char const *argv[]){

    try {
        throw 2;
    }

    catch (...){     //if do not know the error then three dot need to use.
        std::cout <<"some error!" << std::endl;
    }

//    catch (int x){
//        std::cout <<"some error!:" << x << std::endl;
//    }
//
}