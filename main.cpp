#include <iostream>
#include <string>
#include "Class.h"
#include "Wizard.h"
#include "Rat.h"
#include "Enemy.h"
#include "Player.h"
#include "Fight.h"


using namespace std;

int main(){

    Wizard wizard;
    Rat rat;
    Fight f;
    Player CharArray[1]={wizard};

    Player *Player1;
    Enemy *Enemy1 = &rat;

    Player1=Player1->choiceChar(Player1,CharArray);
    Player1->setName();
    

    Enemy1->SetDifficulty(1);
    
    
    f.battle(Player1,Enemy1);
    //cout<<Enemy1->Name<< " difficuly: " << rat.Difficulty<<endl;

    Enemy1->SetDifficulty(2);
    Player1->setHealth(500);

    //cout<<Enemy1->Name<< " difficuly: " << rat.Difficulty<<endl;
    cout << endl;
    f.battle(Player1,Enemy1);
    
   
    //Player1->ClassSetup();
    
   
   


    return 0;
}

