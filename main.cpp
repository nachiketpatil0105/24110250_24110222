#include <iostream>
#include <cstdlib>
#include <ctime>
#include "randfuncs.h"
#include "mathfuncs.h"

using namespace std;

int main()
{
    srand(time(0));   // seed random number generator

    cout << "Coin: " << flipCoin() << endl;
    cout << "6-sided dice: " << rollDice6() << endl;
    cout << "10-sided dice: " << rollDice10() << endl;

    double x = 15.0;
    double y = 3.0;

    std::cout << "Starting arithmetic operations..." << std::endl;
    std::cout << x << " + " << y << " = " << add(x, y) << std::endl;
    std::cout << x << " - " << y << " = " << subtract(x, y) << std::endl;
    std::cout << x << " * " << y << " = " << multiply(x, y) << std::endl;
    std::cout << x << " / " << y << " = " << divide(x, y) << std::endl;

    // int k = 8 / 0;
    
    return 0;
}
