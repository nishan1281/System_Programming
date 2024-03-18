//
// Created by nisha on 2/21/2024.
//
#include "iostream"

//pass by referencing, which enable modification of original value.
//Example:: Function to increment a variable by 1

void increment_R(int& x) {  //working directly with the value in the reference location
    x++;  // Increment x by 1
}

//Pass by value. No direct access of the address/location. Only the value will be used.
void increment_V(int x) {
    x++;  // Increment x by 1
}

void increment_C(const int& x) {  //working directly with the value in the reference location
    x++;  // not possible
}

int main (){

 int num = 5;

 increment_V(num);
 std::cout << "Now value of num is: " << num << std::endl;


 increment_R(num);
 std::cout << "Now value of num is: " << num << std::endl;

 return 0;

}
