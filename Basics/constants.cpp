#include <iostream>

using namespace std;

// Define constant by using #define
#define A 85       // Edge a
#define B 132      // Edge b
#define C 720      // Edge c

// Define constant by const keyword
const int D = 157; // Diagonal d
const int E = 725; // Diagonal e
const int F = 732; // Diagonal f

int main() {
    // Show constants
    cout << "Edges     -> a = " << A << ", b = " << B << ", c = " << C << endl;
    cout << "Diagonals -> d = " << D << ", e = " << E << ", f = " << F << endl;
    
    // Euler brick
    printf("### Euler brick\n");
    cout << "a^2 + b^2 = d^2 -> " << A << "*" << A << " + " << B << "*" << B << " = " << D << "*" << D << " -> ";
    cout << A*A << " + " << B*B << " = " << D*D << " -> " << A*A + B*B << " = " << D*D << endl;
    cout << "a^2 + c^2 = e^2 -> " << A << "*" << A << " + " << C << "*" << C << " = " << E << "*" << E << " -> ";
    cout << A*A << " + " << C*C << " = " << E*E << " -> " << A*A + C*C << " = " << E*E << endl;
    cout << "b^2 + c^2 = f^2 -> " << B << "*" << B << " + " << C << "*" << C << " = " << F << "*" << F << " -> ";
    cout << B*B << " + " << C*C << " = " << F*F << " -> " << B*B + C*C << " = " << F*F << endl;

    return 0;
}