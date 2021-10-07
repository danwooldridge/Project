#ifndef WIZARD_H
#define WIZARD_H

#include <iostream>
#include <string>
#include "Class.h"
#include "Player.h"
using namespace std;

class Wizard: public Player{
public:
    Wizard();
    void Unique();
    ~Wizard();
};

Wizard::Wizard(){
    ClassType = "Wizard";
    Name = "Null";
    Health = 100;
    Attack = 10;
    Defence = 2;
    Experience = 0;
}

void Wizard::Unique(){
cout << "I am " << Name << " the " << ClassType << endl;
cout << "I have " << Attack <<" Attack, " << Health << " Health, and " << Defence << " Defence!" << endl; 
}

Wizard::~Wizard()
{
}

#endif