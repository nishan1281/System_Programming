//
// Created by nisha on 7/17/2024.
//

#include "iostream"
#include "string"

class Test
{
    int i{42};
    std::string str;

public:
    explicit operator int() const {return i;}
};

int main()
{
    Test test;
    std::cout << static_cast<int>(test) << std::endl;
}