#ifndef RAT_H
#define RAT_H

#include <iostream>
#include <string>
#include "Class.h"
#include "Enemy.h"
using namespace std;

class Rat: public Enemy{   
public:
    Rat();
    void Unique();
    ~Rat();
};

Rat::Rat(){
    ClassType = "Rat";
    Difficulty = 1;
    Name = "Rat";
    Health = 50 * Difficulty;
    Attack = 4 * Difficulty;
    Defence = 1 * Difficulty;
    Experience = 20 * Difficulty;
}

void Rat::Unique(){
cout << "I am a enemy " << Name << endl;
cout << "I have " << Attack <<" Attack, " << Health << " Health, and " << Defence << " Defence!" << endl; 
}

Rat::~Rat()
{
}

#endif