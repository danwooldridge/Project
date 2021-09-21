#ifndef CLASS_H
#define CLASS_H

#include <iostream>
#include <string>
using namespace std;

//virtual base class
//base class for all players character types

class Class
{

public:
//base stats for characters to enherit
    string Name;
    int Health;
    int Defence;
    int Attack;

//pure functions 
    virtual void ClassSetup()=0;
    virtual void attack()=0;
};

#endif
