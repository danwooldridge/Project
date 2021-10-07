#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include "Class.h"
using namespace std;
// Parent Class for all player hero choices
// Enherits from Class
class Player : public Class{    
public:
    Player* choiceChar(Player* ptr,Player ptr2[]);
    void GetExp();
    void Unique();
};
// Function will have two arguments: a player class pointer, and ptr to a player class array
// User will input desired number for character selection
// Player class pointer will be set to desired class in class array
 Player* Player::choiceChar(Player* ptr,Player ptr2[]){
    
    int choice;
    cout << "Select your character -  " << endl;
    cout << "press 1 for wizard!" << endl;
    cout << "press 2 for warrior" << endl;
    cout << "press 3 for ranger" << endl;
    cin >> choice;

   while (choice <= 0 || choice >= 4){
           cout << "Invalid input.. must be between 1 - ..."<<endl;
           cout << "Enter again!:" << endl;
           cin >> choice;
        }
   
        ptr = &ptr2[choice-1]; 
        return ptr; 
 }
// Function to return total experience player has aquired
void Player::GetExp(){
    cout << "You have " << Experience << " experience" << endl;
}

 void Player::Unique(){
    cout << "You are " << Name << " the " << ClassType << endl;
    cout << "You " << Attack <<" Attack, " << Health << " Health, " << Defence << " Defence!" << endl; 
}

#endif