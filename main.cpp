#include <iostream>
#include <string>
#include "Class.h"
#include "Wizard.h"
//#include "Warrior.h"
#include "Rat.h"
#include "Enemy.h"
#include "Player.h"
#include "Fight.h"

using namespace std;



int main(){
    Wizard wizard;
    Rat rat;
    Fight f;
    Player *Player1;

    int choice;

    cout << "Select your character -  " << endl;
    cout << "press 1 for wizard!" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        
        Player1 = &wizard;
        break;
    
    default:
        break;
    }
    

    
    Enemy *Enemy1 = &rat;

    f.battle(Player1,Enemy1);
    
   

    //Player1->ClassSetup();
    
   
   


    return 0;
}

