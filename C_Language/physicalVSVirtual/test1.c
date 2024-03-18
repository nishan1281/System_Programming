#include <stdio.h>
#include <unistd.h>

int staticVar = 0;

int main() {
    staticVar +=1;

    sleep(1);
    printf("Address: %p, Value: %d \n", &staticVar, staticVar);

    void function1 (){
        int age = 23;
        printf("value %d",age);

    }

    //here address will be same as this program can not access physical address
    // rather than allocated virtual address allocated by kernel
}