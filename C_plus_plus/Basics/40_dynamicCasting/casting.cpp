//
// Created by nisha on 2/23/2024.
//

//a virtual function is a member function of a class that
// can be overridden in derived classes.

#include "iostream"
#include "string"

class Entity {
public:
    // Virtual function that can be overridden by derived classes
    virtual void printType(){
        std::cout << "i am a Entity" << std::endl;
    }
};

class Player : public Entity {
public:
    // Overrides the printType function of the base class Entity
    void printType() override {
        std::cout << "I am a Player" << std::endl;
    }
};

class Enemy : public Entity {
public:
    // Overrides the printType function of the base class Entity
    void printType() override{
        std::cout << "I am an enemy" << std::endl;
    }
};

int main(){

    // Creating instances of Entity, Player, and Enemy classes
  Entity* entity = new Entity(); //creates Entity object in heap dynamically
  Player* player = new Player();
  Enemy* enemy = new Enemy();
  Entity entity1; //creates object in stack directly

  entity->printType();  //(->) used to access members of an object through a pointer
  player->printType();
  enemy->printType();
  entity1.printType();  //(.) is used to access members of an object directly.

  //polymorphic behaviour.
  //Assigning a derived class pointer to a base class pointer
  Entity* e1 = player;
  Entity* e2 = enemy;

  e1->printType();
  e2->printType();

  delete entity;
  delete player;
  delete enemy;
  delete e1;
  delete e2;

  return 0;
}