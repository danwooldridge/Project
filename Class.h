#ifndef CLASS_H
#define CLASS_H

#include <iostream>
#include <string>
using namespace std;

//virtual base class
//base class for all players character and enemy types

class Class{

public:
    string Name;
    int Health;
    int Defence;
    int Attack;  

    void setHealth(int health);
    void SetDefence(int defence);
    void setAttack(int attack);  
    void setName();
//pure functions 
    //virtual void ClassSetup()=0;
   
};

    void Class::setHealth(int health){
        Health=health;
    }
    void Class::SetDefence(int defence){
        Defence=defence;
    }
    void Class::setAttack(int attack){
        Attack=attack;
    }  
    void Class::setName(){
        cout<<"Enter your name: "<<endl;
        cin >> Name;
    }
#endif
