//
// Created by nisha on 3/29/2024.
//
#include "iostream"

//will compile
template <int n>

class Array{
private:
    int m_Array[n];

public:
    int getSize() const{
        return n;
    }
};

int main(){
    Array<5> array;
    std::cout << array.getSize() << std::endl;
    std::cin.get();
}