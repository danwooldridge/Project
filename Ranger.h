#ifndef RANGER_H
#define RANGER_H

#include <iostream>
#include <string>
#include "Class.h"
#include "Player.h"
using namespace std;

class Ranger: public Player{
public:
    Ranger();
    void Unique();
    ~Ranger();
};

Ranger::Ranger(){
    ClassType = "Ranger";
    Name = "Null";
    Health = 100;
    Attack = 9;
    Defence = 3;
    Experience = 0;
}

void Ranger::Unique(){
cout << "I am " << Name << " the " << ClassType << endl;
cout << "I have " << Attack <<" Attack, " << Health << " Health, and " << Defence << " Defence!" << endl; 
}

Ranger::~Ranger()
{
}

#endif