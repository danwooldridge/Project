#include <iostream>
#include <string>
#include "Class.h"
#include "Wizard.h"
#include "Warrior.h"

using namespace std;

int main(){
    Wizard w;
    Warrior W;
    

    w.ClassSetup();
    w.attack();
    W.ClassSetup();
    W.attack();



    return 0;
}