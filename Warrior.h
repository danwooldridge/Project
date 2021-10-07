#ifndef WARRIOR_H
#define WARRIOR_H

#include <iostream>
#include <string>
#include "Class.h"
#include "Player.h"
using namespace std;

class Warrior: public Player{
public:
    Warrior();
    void Unique();
    ~Warrior();
};

Warrior::Warrior(){
    ClassType = "Warrior";
    Name = "Null";
    Health = 100;
    Attack = 8;
    Defence = 4;
    Experience = 0;
}

void Warrior::Unique(){
cout << "I am " << Name << " the " << ClassType << endl;
cout << "I have " << Attack <<" Attack, " << Health << " Health, and " << Defence << " Defence!" << endl; 
}

Warrior::~Warrior()
{
}

#endif