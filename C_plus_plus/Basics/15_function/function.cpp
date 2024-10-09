//
// Created by nisha on 2/3/2024.
//
#include "iostream"

void sayHello(std::string name = "sifan")
{
    std::cout << "my Name is " << name << std::endl;
};
// Declare here as c++ read from top to bottom. Default value if no arg found

double sum (double num1, double num2){
    return num1 + num2;
}

//overloading
int sum (int num1, int num2){
    num1 = num1+5;
    num2 = num2+6;
   int result = num1 + num2;
    return result;
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

    int result2 = sum(10, 12);
    std::cout << result2 << std::endl;

}

