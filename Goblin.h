#ifndef GOBLIN_H
#define GOBLIN_H

#include <iostream>
#include <string>
#include "Class.h"
#include "Enemy.h"
using namespace std;

class Goblin: public Enemy{
public:
    Goblin();
    void Unique();
    ~Goblin();
};

Goblin::Goblin(){
    ClassType = "Goblin";
    Difficulty = 1;
    Name = "Goblin";
    Health = 70 * Difficulty;
    Attack = 7 * Difficulty;
    Defence = 2 * Difficulty;
    Experience = 40 * Difficulty;
}

void Goblin::Unique(){
cout << "I am a enemy " << Name << endl;
cout << "I have " << Attack <<" Attack, " << Health << " Health, and " << Defence << " Defence!" << endl; 
}

Goblin::~Goblin()
{
}

#endif