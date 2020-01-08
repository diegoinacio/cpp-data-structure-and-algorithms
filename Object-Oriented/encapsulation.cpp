#include <iostream>
#include <math.h>

using namespace std;

class Point {
    private:
        float x, y, z;
        // Hidden information
        float length;

        void setLength() {
            length = sqrt(x*x + y*y + z*z);
        }

    public:
        // Constructors
        Point() {x = 0; y = 0; z = 0;}
        Point(float u, float v, float w) {x = u; y = v; z= w;}

        void setPosition(float u, float v, float w) {x = u; y = v; z= w;}

        void showPosition() {
            cout << "Point position   : ";
            cout << "(" << x << ", " << y << ", " << z << ")";
            cout << endl;
        }

        void showNormalized() {
            setLength();
            float n = length;
            cout << "Normalized point : ";
            cout << "(" << x/n << ", " << y/n << ", " << z/n << ")";
            cout << endl;
        }
};

int main() {
    // Declare object
    Point P;

    P.setPosition(17, 13, 21);
    P.showPosition();
    P.showNormalized();

    cout << endl;

    P.setPosition(2, 1, 5);
    P.showPosition();
    P.showNormalized();

    return 0;
}