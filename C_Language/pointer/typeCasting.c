#include "stdio.h"

int main(){
    int nb;
    int *ptr;
    nb = 42;
    ptr = &nb;

    printf("%d  %E\n", *ptr, *(float *)ptr);
    printf("%d  %c\n", *ptr, *(char *)ptr);
}