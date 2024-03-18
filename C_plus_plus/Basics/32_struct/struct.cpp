//
// Created by nisha on 2/9/2024.
//
//by default everything in c++ class is private and in struct all are public

#include "iostream"

struct Player{
    void move(){
        std::cout << "player move" << std::endl;
    }
};


class Enemy{
    void move(){
        std::cout << "player move" << std::endl;
    }
};

int main(int argc, char const *argv[]){
    Player p;
    Enemy e;

    p.move();
    e.move(); //will not work as by default this method is private
}