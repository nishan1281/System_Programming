//
// Created by nisha on 2/7/2024.
//

#include "iostream"
#include "Birthday.h"
#include "Person.h"

int main(){

    Birthday buddy (5,8,2000);

    Person steve ("Steve", buddy);
    steve.toString();

    return 0;
}
