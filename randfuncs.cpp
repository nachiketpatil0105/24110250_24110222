#include "randfuncs.h"
#include <cstdlib>

int flipCoin()
{
    return rand() % 2;       // 0 or 1
}

int rollDice6()
{
    return rand() % 6 + 1;   // 1 to 6
}

int rollDice10()
{
    return rand() % 10 + 1;  // 1 to 10
}
