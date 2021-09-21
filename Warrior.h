#ifndef WARRIOR_H
#define WARRIOR_H

#include <iostream>
#include <string>
#include "Class.h"
using namespace std;

class Warrior: public Class
{
private:
    /* data */
public:
     Warrior();
    void attack();
    void ClassSetup();
    ~Warrior();
};

#endif

Warrior::Warrior(){
    Name = "Null";
    Health = 100;
    Attack = 5;
    Defence = 5;
}
void Warrior::ClassSetup(){
    cout << "What is name?: "<<endl;
    cin >> Name;

}

void Warrior::attack(){
cout << "I am " << Name << endl;    
cout << "Warrior attack!"<<endl;
cout << "I have "<< Health << " health!" << endl;
cout << "and " << Attack << " attack points!"<< endl;
cout << "and " << Defence << " defence points!"<< endl;
}

Warrior::~Warrior()
{
}