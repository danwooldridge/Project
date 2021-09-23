#ifndef FIGHT_H
#define FIGHT_H
#include <iostream>
#include <string>
#include "Enemy.h"
#include "Player.h"

extern int Dice();

using namespace std;

class Fight
{
private:
    
public:
    string Environment;

    Fight();
    void battle(Player *P, Enemy *E);
    ~Fight();
};

Fight::Fight(){
    Environment = "Default";
}
void Fight::battle(Player *P, Enemy *E){
    int imput=0;
    int roll=0;
    int eRoll=0;
    
    cout<< "FIGHTING IN "<<Environment<<endl;
    
    while (E->Health > 0 && P->Health > 0){
        cout<<"Press 1 to attack!"<<endl;
        cin>>imput;

        if (imput==1)
        {
           
            cout << endl<< "you rolled a ";
            roll=Dice();
            cout<<endl;
            cout<<E->Name<<"rolled a ";
            eRoll=Dice();
            cout<<endl;

            E->Health = E->Health - P->Attack*(roll)/E->Defence;
            P->Health = P->Health - E->Attack*(eRoll)/P->Defence;
            cout << E->Name<< " health is " << E->Health << endl;
            cout << P->Name<<" health is " << P->Health << endl;
        }
    }

  

    if (E->Health < P->Health)
    {
    cout << P->Name << " wins!" << endl;

    }else{
    cout << E->Name << " wins!" << endl;
    }
        

}
Fight::~Fight(){
}

#endif
