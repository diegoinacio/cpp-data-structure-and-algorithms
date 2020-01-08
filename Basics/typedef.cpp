#include <iostream>

using namespace std;


typedef double float64;

// Define new type from struct
typedef struct {
    float64 real;
    float64 imag;
} Complex;


int main() {
    // Declare structres
    Complex C1;
    Complex *C2;

    // Initialize
    C1.real = 0;
    C1.imag = 2;
    cout << "The value of C1 is " << C1.real << " + " << C1.imag << "i\n" << endl;

    // Changing values through pointer
    C2 = &C1;
    (*C2).real = -0.5;
    (*C2).imag = 0.8;
    cout << "Now the value of C1 is " << C1.real << " + " << C1.imag << "i\n" << endl;

    // Another way to use struct pointers and change the values
    C2->real = -1;
    C2->imag = 1;
    cout << "Now the value of C1 is " << C1.real << " + " << C1.imag << "i\n" << endl;

    return 0;
}