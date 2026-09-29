#include "mathfuncs.h"

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    // Basic division; in a robust program you would want to handle division by zero
    if (b == 0) {
        return 0; 
    }
    return a / b;
}