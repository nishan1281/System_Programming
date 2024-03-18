//
// Created by nisha on 2/9/2024.
//

#include "iostream"

class MyClass{
private:
    int num;

public:
    MyClass(){
        num = 10;
    }

    friend void getNum (MyClass &cls1); //friend used here to access num variable
};

void getNum(MyClass &cls){
    cls.num = 100;
    std::cout<< cls.num <<std::endl;
}

int main(){
    MyClass nishanClass;
    getNum(nishanClass);

}