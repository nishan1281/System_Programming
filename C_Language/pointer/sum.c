//
// Created by nisha on 1/9/2024.
//
#include <stdio.h>

int sum (int a, int b){
    int result;
    result = a+b;
    return result;
    }

int main() {

    int u = sum(3,2);
    int *y = &sum;
    printf("the address of y= %p and the result %d\n", y, u);
}