
#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int Dice(){

    srand((int) time(nullptr)); 
    int dice = (rand() % 6 ) + 1;
    cout << "Dice: " << dice << endl;
    return dice;
}

