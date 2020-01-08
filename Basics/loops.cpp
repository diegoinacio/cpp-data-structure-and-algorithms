#include <iostream>

using namespace std;

int main() {
    // Support variables
    int a, b;

    // while loop
    a = 5;
    b = 10;
    while(b > a) {
        cout << a << " ";
        a++;
    }
    cout << endl;

    // for loop
    for (int i = 0; i < 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    // do ... while loop
    a = 1;
    b = 100;
    do {
        cout << a << " ";
        a += 10;
    } while (a < b);
    cout << endl;

    // nested loops
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << i*5 + j << " ";
        }
    }
    cout << endl;

    return 0;
}