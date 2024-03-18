//
// Created by nisha on 2/4/2024.
//

#include "iostream"
#include "tuple"

int main (int argc, char const *argv[]) {

    std::tuple<std::string, int, bool> identity = std::make_tuple("nishan", 37, false);

    std::cout << std::get<1>(identity) << std::endl;

    //destructuring

    /**
     * @brief
     * destructuring to get the data from tuple.
     * 
     * @a Used to capture data from tuple
     **/


    std::string a;
    int b;
    bool c;

    std::tie(a,b,c) = identity;

    std::cout <<"1st data: "+ a + ", 2nd data: "<<b<< ", 3rd data: "<< c << std::endl;


    return 0;
}