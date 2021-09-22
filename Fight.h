#ifndef FIGHT_H
#define FIGHT_H
#include <iostream>
#include <string>
#include "Enemy.h"
#include "Player.h"

using namespace std;

class Fight
{
private:
    /* data */
public:
    Fight();
    int battle(Player *P, Enemy *E);
    ~Fight();
};

Fight::Fight(){
}
int Fight::battle(Player *P, Enemy *E){
    while (E->Health > 0)
        {
            E->Health = E->Health - P->Attack;
            P->Health = P->Health - E->Attack;
            
        }
        cout << "enemy health is " << E->Health<< endl;
        cout << "player health is " << P->Health<< endl;
        return P->Health;
}
Fight::~Fight(){
}

#endif
