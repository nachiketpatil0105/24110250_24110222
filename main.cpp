#include <iostream>
#include "mathfuncs.h"

int main() {
    double x = 15.0;
    double y = 3.0;

    std::cout << "Starting arithmetic operations..." << std::endl;
    std::cout << x << " + " << y << " = " << add(x, y) << std::endl;
    std::cout << x << " - " << y << " = " << subtract(x, y) << std::endl;
    std::cout << x << " * " << y << " = " << multiply(x, y) << std::endl;
    std::cout << x << " / " << y << " = " << divide(x, y) << std::endl;

    return 0;
}