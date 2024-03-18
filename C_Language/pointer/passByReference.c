#include "stdio.h"
void change_value(int *nb);

int main(){
    int nb;
    nb = 42;
    change_value(&nb);
    printf("%d\n",nb);
}

//below function means to take input of address and then de-referencing *nb changed value to 1223.
void change_value(int *nb){
    *nb = 1223;
}