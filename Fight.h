#ifndef FIGHT_H
#define FIGHT_H
#include <iostream>
#include <string>
#include "Enemy.h"
#include "Player.h"

// Include dice roll function
extern int Dice();
using namespace std;

class Fight{   
public:
    string Environment;

    Fight(string environment);
    void battle(Player *P, Enemy *E);
    ~Fight();
};

// default constructor takes in string for an environment type
Fight::Fight(string environment){
    Environment = environment;
}
// Fight function
void Fight::battle(Player *P, Enemy *E){
    int imput=0;
    int roll=0;
    cout<< "You are fighting a " << E->ClassType << " in " << Environment << endl;
    

// User is able to attack until either hero or enemy has zero health
// Each attack a dice is rolled to determine the attack of user
// Attack power is multiplied by dice roll subtracted by the defence of what is being attacked
// Who ever reaches zero health first loses

    while (E->Health > 0 && P->Health > 0){
        cout << endl;
        cout <<"Press 1 to attack!"<<endl;
        cin >> imput;

        if (imput==1)
        {
            cout << endl<< "you rolled a ";
// Roll dice function
            roll=Dice();
            cout << "Doing " << (roll * P->Attack)-(E->Defence) << " damage!" << endl;
            cout << endl;
           
            E->Health = (E->Health + E->Defence) - (P->Attack*(roll));
            P->Health = (P->Health + P->Defence) - (E->Attack);
            cout << E->Name<< " health is " << E->Health << endl;
            cout << P->Name<<" health is " << P->Health << endl;
            cout << endl;
        }
    }
// If player wins they will recieve the total experience of enemy killed
// Winners name is displayed at end of fight
    if (E->Health < P->Health)
    {
    cout << P->Name << " wins!" << endl;
    P->Experience = P->Experience + E->Experience;

    }else{
    cout << E->Name << " wins!" << endl;
    }
}

Fight::~Fight(){
}

#endif
