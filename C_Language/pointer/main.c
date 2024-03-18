#include <stdio.h>
#include "stdlib.h"

void swapping  (int *ptr1, int *ptr2){
    int temp; //to get an int just use temp
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;  //de-referencing
}

int main() {

    int x = 5;
    int y = 10;
    int *p; //to get an int just dereference p
    p = &x;  //* used to declare pointer variable which store address of x

    printf("The value of x: %d, \n the address of x is: %p \n", x, &x);
    printf("The address of p: %p, \nThe address stored in p is: %p \n", &p, p);
    printf("The content of p: %d \n", *p);

    //ampersand (&) is a symbol in English to print address in c lang

    p = &y;  // single pointer multiple use;
    printf("The content of p: %d \n", *p);

    //swapping by pointer
    swapping (&x, &y);  //pass value by referencing
    printf("\nAfter swapping \n");
    printf("The value of x: %d,\nThe value of y: %d, \n", x, y);

    //accessing array elements by pointer
    int a [5] = {1,2,3,4,5};
    int *ptr,i;
    ptr= &a[0];
    printf("\nArray element access by pointer\n");

    int j =0;
    while (j<5){
        printf("try repeating\n");
        j++; //j++ = j+1; ++j = j+1
    }


    for (i=0; i<5; i++)
    {
        printf("%d \n", *ptr);
        ptr++;
    }

    for (i=0; i<5; i++)
    {
        printf("try 2 %d\n",i);

    }



    int result = abs (-25);
    printf("%d\n",  result);

    return 0;
}

