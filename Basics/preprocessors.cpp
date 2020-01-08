#include <iostream>
#include "preprocessors.h"

using namespace std;

// Undefine PI2 if it exists
#ifdef PI2
    #undef PI2
#endif

// Define constant TAU given the PI2 indefinition
#ifdef PI
    #define TAU 2*PI
#else
    #define PI 3.14159265359
    #define TAU 2*PI
#endif

// Define function OMEGA
#ifndef OMEGA
    #define OMEGA(tau, f) tau*f
#endif


// Defines the global variable f
double f = 440;


int main() {
    double omega = OMEGA(TAU, f);
    cout << "The ordinary frequency is " << f;
    cout << " Hz and the angular frequency is " << omega << endl;

    return 0;
}