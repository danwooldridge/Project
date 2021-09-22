#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>
#include <string>
#include "Class.h"
using namespace std;

class Enemy: public Class{

public:
//base stats for enemys to enherit
    string Name;
    string Type;
    int Health;
    int Defence;
    int Attack;
    

    Enemy();
    void ClassSetup();
    ~Enemy();
};

Enemy::Enemy(){

}
void Enemy::ClassSetup(){
    cout << "What is name?: " <<endl;
    cin >> Name;
    cout << "what ememy would you like?: " << endl;
    cin >> Type;
}

Enemy::~Enemy(){

}

#endif