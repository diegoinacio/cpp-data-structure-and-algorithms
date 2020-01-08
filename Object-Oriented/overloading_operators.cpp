#include <iostream>
#include <math.h>

using namespace std;

class Complex {
    public:
        float real; // Public attribute
        float imag; // Public attribute

        float getMagnitude(){
            // Public method
            return sqrt(real*real + imag*imag);
        }

        float getAngle(){
            // Public method
            return atan2(imag, real);
        }

        // Operators overload
        Complex operator+(const Complex& c) {
            Complex complex;
            complex.real = this->real + c.real;
            complex.imag = this->imag + c.imag;
            return complex;
        }

        Complex operator-(const Complex& c) {
            Complex complex;
            complex.real = this->real - c.real;
            complex.imag = this->imag - c.imag;
            return complex;
        }

        Complex operator*(const Complex& c) {
            Complex complex;
            complex.real = this->real*c.real - this->imag*c.imag;
            complex.imag = this->real*c.imag + c.real*this->imag;
            return complex;
        }
};

int main() {
    // Declare object
    Complex c1, c2, c3;

    // Init attributes
    c1.real = 2;
    c1.imag = 4;

    c2.real = 1;
    c2.imag = 3;
    
    cout << "c1 = " << c1.real << " + " << c1.imag << "i" << endl;
    cout << "c2 = " << c2.real << " + " << c2.imag << "i" << endl;

    cout << endl;

    // Complex addition
    c3 = c1 + c2;
    cout << "c1 + c2 = " << c3.real << " + " << c3.imag << "i" << endl;

    // Complex subtraction
    c3 = c1 - c2;
    cout << "c1 - c2 = " << c3.real << " + " << c3.imag << "i" << endl;

    // Complex multiplication
    c3 = c1*c2;
    cout << "c1 * c2 = " << c3.real << " + " << c3.imag << "i" << endl;

    return 0;
}