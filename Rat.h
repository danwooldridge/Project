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
    void ClassSetup();
    void attack();
    ~Rat();
};

#endif

Rat::Rat(){
    Difficulty = 1;
    Name = "Rat";
    Health = 50 * Difficulty;
    Attack = 2 * Difficulty;
    Defence = 1 * Difficulty;
}
void Rat::ClassSetup(){
    cout << "RAT:What is name?: "<<endl;
    cin >> Name;
}
void Rat::attack(){
cout << "I am " << Name << endl;    
cout << "I have "<< Health << " health!" << endl;
cout << "and " << Attack << " attack points!"<< endl;
cout << "and " << Defence << " defence points!"<< endl;
cout << "Rat attack!"<<endl;
}
Rat::~Rat()
{
}