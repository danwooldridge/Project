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
    string ClassType;
    int Health;
    int Defence;
    int Attack;  
    int Experience;

    void setHealth(int health);
    void SetDefence(int defence);
    void setAttack(int attack);  
    void setName();
// pure function
    virtual void Unique()=0;
   
};
// set functions for all primary stats and name
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
        cout << endl;
    }
#endif
