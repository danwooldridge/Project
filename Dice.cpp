#include <iostream>
#include <string>
#include <time.h>
using namespace std;
// Function to roll a random number detween 1-6
// returns that number to simulate a dice roll
int Dice(){

    srand((int) time(nullptr)); 
    int dice = (rand() % 6 ) + 1;
    cout << "Dice: " << dice << endl;
    return dice;
}

