//
// Created by nisha on 2/9/2024.
//

#include "iostream"
#include "Vector.h"

 Vector:: Vector(){
        x = 0;
        y = 0;
    }

Vector:: Vector(int x, int y){
        this->x = x;
        this->y = y;
    }

    //operator Overloading. Here, class name then operator and "-,+,*,/" for arithmetic operation.

Vector Vector::operator-(Vector vec1){
        Vector newVec;

        newVec.x = this->x - vec1.x;
        newVec.y = this->y - vec1.y;

        return newVec;
    }
