#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include "Class.h"
using namespace std;

class Player : public Class{    
    public:
    
    Player* choiceChar(Player* ptr,Player ptr2[]);
    
};

 Player* Player::choiceChar(Player* ptr,Player ptr2[]){
    
    int choice;
    cout << "Select your character -  " << endl;
    cout << "press 1 for wizard!" << endl;
    cin >> choice;

    switch (choice){
    case 1:
        
        ptr = &ptr2[choice-1]; 
        return ptr;
        break;
    
    default:
        break;
    }
 }

#endif