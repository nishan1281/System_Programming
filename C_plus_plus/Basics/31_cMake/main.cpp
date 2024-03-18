//
// Created by nisha on 2/9/2024.
//
#include "iostream"
#include "Vector.h"

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