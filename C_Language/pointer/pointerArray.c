#include "stdio.h"
#include "stdlib.h"

int main(){
    int arr[10];  //created object in stack frame


    //Fake array
    int *ptr = alloca(sizeof (int) *10); //int size = 4byte. So total allocation is 40 byte.

}

