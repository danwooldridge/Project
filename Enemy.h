#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>
#include <string>
#include "Class.h"
using namespace std;

class Enemy: public Class{

public:
//base stats for enemys to enherit
   
    int Difficulty;
    void SetDifficulty(int difficulty);
};

void Enemy::SetDifficulty(int difficulty){
    Difficulty = difficulty;
    Health = Health*difficulty;
    Defence = Defence*difficulty;
    Attack = Attack*difficulty;
}

#endif