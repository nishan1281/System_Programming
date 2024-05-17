//
// Created by nisha on 5/4/2024.
//
#include <iostream>

int main() {
    // Create an integer variable
    int num = 42;

    // Create a pointer to the integer variable
    int* ptr = &num;

    /*Create a char pointer pointing to the memory location of num
    first: casting to void*, spacial pointer in c++ that can hold the address of any
    object regardless of its type.
    second: reinterpret the bit pattern of the void* pointer as if it were pointing
    to a char type. This operation effectively "views" the memory as if it were a
    sequence of characters (bytes) rather than integers. */
    char* charPtr = static_cast<char*>(static_cast<void*>(ptr));

    // Create a char pointer by reinterpret_cast
    char* charPtr1 = reinterpret_cast<char*>(ptr);

    // Print the memory address and value of num using charPtr
    std::cout << "Memory Address of num (charPtr): " << static_cast<void*>(charPtr) << std::endl;
    std::cout << "Value of num (charPtr): " << static_cast<int>(*charPtr) << std::endl;

    std::cout << "Value of num (charPtr1): " << static_cast<int>(*charPtr1) << std::endl;

    return 0;
}
