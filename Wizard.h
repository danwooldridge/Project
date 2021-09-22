#ifndef WIZARD_H
#define WIZARD_H

#include <iostream>
#include <string>
#include "Class.h"
#include "Player.h"
using namespace std;

class Wizard: public Player
{
private:
    /* data */
public:
    Wizard();
    void attack();
    void ClassSetup();
    ~Wizard();
};

#endif

Wizard::Wizard(){
    Name = "Null";
    Health = 100;
    Attack = 10;
    Defence = 2;
}

void Wizard::attack(){
cout << "I am " << Name << endl;    
cout << "Wizard attack!"<<endl;
cout << "I have "<< Health << " health!" << endl;
cout << "and " << Attack << " attack points!"<< endl;
cout << "and " << Defence << " defence points!"<< endl;
}

void Wizard::ClassSetup(){
    cout << "WIZARD:What is name?: "<<endl;
    cin >> Name;
}
Wizard::~Wizard()
{
}
