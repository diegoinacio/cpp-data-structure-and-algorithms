#include <iostream>

using namespace std;

void increment(float *a);

int main() {
    float a = 10;

    // The operator & gets the memory address of he variable
    cout << "The value of 'a' is " << a << " and the address is " << &a << endl;

    // Declaring a pointer with the same type of the variable
    float *p;

    // Initialize a pointer
    p = &a;
    cout << "The address stored in 'p' is " << p << " and the its value is " << *p << endl;

    // Pointer of pointers
    float **pp = &p;
    cout << "The address stored in 'pp' is " << pp << ", which has as the value the address (p) ";
    cout << *pp << " where the value (a) is " << **pp << endl;

    // Pointers as a function argument
    increment(&a);
    cout << "Now 'a' is " << a << endl;
    increment(p);
    cout << "Now 'a' is " << a << endl;
    increment(*pp);
    cout << "Now 'a' is " << a << endl;

    return 0;
}

void increment(float *a){
    *a += 1;
}