#include <iostream>
#include <cstdlib>
#include <ctime>
#include "randfuncs.h"

using namespace std;

int main()
{
    srand(time(0));   // seed random number generator

    cout << "Coin: " << flipCoin() << endl;
    cout << "6-sided dice: " << rollDice6() << endl;
    cout << "10-sided dice: " << rollDice10() << endl;

    return 0;
}
