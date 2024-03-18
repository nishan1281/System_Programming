//
// Created by nisha on 2/9/2024.
//

#include "iostream"

class Vector
{
public:
    int  x, y;

    Vector(){
        x = 0;
        y = 0;
    }

    Vector(int x, int y){
        this->x = x;
        this->y = y;
    }

    //operator Overloading. Here, class name then operator and "-,+,*,/" for arithmetic operation.

    Vector operator-(Vector vec1){
        Vector newVec;

        newVec.x = this->x - vec1.x;
        newVec.y = this->y - vec1.y;

        return newVec;
    }
};

int main(int argc, char const *argv[]) {

    Vector playerPos (10, 20);
    Vector enemyPos(40, 30);
    Vector dist;

//    const int x = enemyPos.x - playerPos.x;
//    const int y = enemyPos.y - playerPos.y;

    dist = enemyPos - playerPos;

    std::cout << " x dist: " << dist.x << "\n y dist: "<< dist.y <<std::endl;

    return 0;
}