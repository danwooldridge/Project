#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include "Class.h"
using namespace std;

//virtual base class
//base class for all players character types

class Player : public Class{

public:

    string Name;
    int Health;
    int Defence;
    int Attack;

Player();
void ClassSetup();
~Player();
};

Player::Player(){

}
void Player::ClassSetup(){
    cout << "PLAYER:What is name?: "<<endl;
    cin >> Name;
}

Player::~Player(){

}


#endif