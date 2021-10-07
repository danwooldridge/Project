#include <iostream>
#include <string>
#include "Class.h"
#include "Wizard.h"
#include "Rat.h"
#include "Enemy.h"
#include "Player.h"
#include "Fight.h"
#include "Warrior.h"
#include "Goblin.h"
#include "Ranger.h"

using namespace std;

int main(){
// create user heroes & enemy classes
    Wizard wizard;
    Warrior warrior;
    Ranger ranger;
    Rat rat;
    Goblin goblin;

// create fight arenas
    Fight snow("Snow");

// create Player class array with all heroes 
// create Enemy class array with all enemies
    Player CharArray[3]={wizard,warrior,ranger};
    Enemy EnemyArray[2]={rat,goblin};

// create player & enemy class pointers 
    Player *Player1;
    Enemy *Enemy1 = &EnemyArray[1];

// player class method to choice hero class and set name
    Player1=Player1->choiceChar(Player1,CharArray);
    Player1->setName();

// test setting difficulty of enemies
    /*Enemy1->SetDifficulty(1);
    cout<<Enemy1->Name<< " difficuly: " << rat.Difficulty<<endl;
    Enemy1->SetDifficulty(1);
    cout<<Enemy1->Name<< " difficuly: " << rat.Difficulty<<endl;*/

// test virtual void function for player and enemy   
    Player1->Unique();
    cout << endl;
    Enemy1->Unique();
    cout << endl;
// testing basic battle between selected character and rat
// should display fight environment
// should display dice roll and attack damage
// should display winner
    snow.battle(Player1,Enemy1);
    
// testing Experience after fight
    Player1->GetExp();
    snow.battle(Player1,Enemy1);
    Player1->GetExp();

// testing fight with setting enemy health to 500
// testing with diffuculty set to 3
// health should be 1500, rat should deal 6 damage devided
    /*Enemy1->setHealth(500);
    Enemy1->SetDifficulty(3);
    snow.battle(Player1,Enemy1);*/
    
    return 0;
}

