#include <iostream>
#include <string>
#include "Class.h"
#include "Wizard.h"
//#include "Warrior.h"
#include "Rat.h"
#include "Enemy.h"
#include "Player.h"

using namespace std;

int Fight(Player P, Enemy E){
    while (E.Health > 0 || P.Health > 0)
    {
        E.Health = E.Health - P.Attack;
        P.Health = P.Health - E.Attack;
        cout << "enemy health is " << E.Health<< endl;
        cout << "player health is " << P.Health<< endl;
    }
    return P.Health;
}