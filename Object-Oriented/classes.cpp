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
};

int main() {
    // Declare object
    Complex c;

    // Init attributes
    c.real = -1;
    c.imag = 0;
    
    // Ouput
    cout << "c = " << c.real << " + " << c.imag << "i" << endl;
    cout << "The magnitude of c is " << c.getMagnitude() << endl;
    cout << "The angle of c is " << c.getAngle() << endl;

    return 0;
}