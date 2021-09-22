#ifndef RAT_H
#define RAT_H

#include <iostream>
#include <string>
#include "Class.h"
#include "Enemy.h"
using namespace std;

class Rat: public Enemy
{
private:
    /* data */
public:
    Rat();
    void attack();
    ~Rat();
};

#endif

Rat::Rat(){
    Name = "Null";
    Health = 50;
    Attack = 2;
    Defence = 2;
}

void Rat::attack(){
cout << "I am " << Name << endl;    
cout << "Rat attack!"<<endl;
cout << "I have "<< Health << " health!" << endl;
cout << "and " << Attack << " attack points!"<< endl;
cout << "and " << Defence << " defence points!"<< endl;
}
Rat::~Rat()
{
}