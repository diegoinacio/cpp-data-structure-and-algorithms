#include <iostream>

using namespace std;

int main() {
    // Variable declaration
    char v_char;
    int v_uintA, v_uintB;
    unsigned int v_uintC;
    double v_doubleA, v_doubleB;
    long double v_doubleC;
    
    // Variable initialization
    v_char = 'V';
    v_uintA = 10;
    v_uintB = 25;
    v_uintC = v_uintA + v_uintB;
    v_doubleA = 0.1;
    v_doubleB = 0.2;
    v_doubleC = v_doubleA + v_doubleB;
    
    // Output
    cout << "v_char = " << v_char << endl;
    cout << "v_uintA = " << v_uintA << endl;
    cout << "v_uintB = " << v_uintB << endl;
    cout << "v_uintC = " << v_uintA << " + " << v_uintB << " = " << v_uintC << endl;
    cout << "v_doubleA = " << v_doubleA << endl;
    cout << "v_doubleB = " << v_doubleB << endl;
    cout << "v_doubleC = " << v_doubleA << " + " << v_doubleB << " = " << v_doubleC << endl;

    return 0;
}