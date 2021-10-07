#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>
#include <string>
#include "Class.h"
using namespace std;
// Parent class for all enemy classes 
// Enherits from Class
class Enemy: public Class{
public:
    int Difficulty;

    void SetDifficulty(int difficulty);
    void Unique();
    
};
// Set diffuclty function
// multiplys all base stats by the number difficulty
void Enemy::SetDifficulty(int difficulty){
    Difficulty = difficulty;
    Health = Health*difficulty;
    Defence = Defence*difficulty;
    Attack = Attack*difficulty;
}

void Enemy::Unique(){
cout << "I am enemy " << Name << endl;
cout << "I have " << Attack <<" Attack, " << Health << " Health, and " << Defence << " Defence!" << endl; 
}

#endif