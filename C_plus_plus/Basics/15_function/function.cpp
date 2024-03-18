//
// Created by nisha on 2/3/2024.
//
#include "iostream"

void sayHello(std::string name= "sifan");
// Declare here as c++ read from top to bottom. Default value if no arg found

double sum (double num1, double num2){
    return num1 + num2;
}

//overloading
int sum (int num1, int num2){
    return num1 + num2;
}

//overWriting
void sayHello(std::string name, int age){
    std::cout << "Hello " << name << ", your age:" << age << std::endl;
};


int main(int argc,  char const *argv[]){

    sayHello("Nishan");
    sayHello("Ariful");
    sayHello();
    sayHello("arif", 20);

    double result = sum(5.2, 5.3);
    std::cout << result << std::endl;

    int result1 = sum(5, 6);
    std::cout << result1 << std::endl;


    return 0;
}

void sayHello(std::string name){
    std::cout <<"Hello " << name << std::endl;
}