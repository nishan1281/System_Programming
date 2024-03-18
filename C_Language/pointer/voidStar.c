//
// Created by nishan on 1/27/2024.
//

#include <stdio.h>
#include "stdlib.h"

int main() {
    // Example 1: Using void* for generic pointers
    int num = 42;
    float pi = 3.14;
    char letter = 'A';

    // Using void* to create generic pointers
    void *genericPtr;

    genericPtr = &num;
    printf("Value pointed to by genericPtr: %d\n", *((int*)genericPtr));

    genericPtr = &pi;
    printf("Value pointed to by genericPtr: %.2f\n", *((float*)genericPtr));

    genericPtr = &letter;
    printf("Value pointed to by genericPtr: %c\n", *((char*)genericPtr));

    // Example 2: Allocating memory using void* here 4 byte
    size_t sizeOfType = sizeof(int); //size_t size = 4 is not usable as i would like to store int data

    void *dynamicPtr = malloc(sizeOfType); //dynamicPtr would point to a memory block of 4 bytes.

    if (dynamicPtr != NULL) {
        // You can use dynamicPtr to store data of any type
        *((int*)dynamicPtr) = 123;

        printf("Value stored in dynamicPtr: %d\n", *((int*)dynamicPtr));

        // Remember to free the dynamically allocated memory when done
        free(dynamicPtr);
    }

    return 0;
}
