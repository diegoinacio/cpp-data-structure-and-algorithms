#include <iostream>

using namespace std;

struct Point {
    int p_id;
    float x, y, z;
};


int main() {
    // Declare structres
    struct Point P1;
    struct Point *P2;

    // Initialize
    P1.p_id = 0;
    P1.x = 0.7;
    P1.y = 0.4;
    P1.z = 0.9;
    cout << "The position of the point P1 is (" << P1.x << ", " << P1.y << ", " << P1.z << ")" << endl;

    // Changing values through pointer
    P2 = &P1;
    (*P2).x = -0.5;
    (*P2).y = 0.8;
    (*P2).z = 0.4;
    cout << "Now the position of the point P1 is (" << P1.x << ", " << P1.y << ", " << P1.z << ")" << endl;

    // Another way to use struct pointers and change the values
    P2->x = -1;
    P2->y = 1;
    P2->z = -1;
    cout << "Now the position of the point P1 is (" << P1.x << ", " << P1.y << ", " << P1.z << ")" << endl;

    return 0;
}