#include <iostream>

using namespace std;

int main() {
    // Support variables
    int N = 4;

    // Array declaration
    float arrayA[N];  // Array with N positions

    // Array initialization
    arrayA[0] = 0.5;
    arrayA[1] = 1.5;
    arrayA[2] = 2.5;
    arrayA[3] = 3.5;

    // Output by accessing the element
    cout << "The third element of the arrayA has index as 2 so it is " << arrayA[2] << endl;

    // Loop over all the elements
    for (int i = 0; i < N; i++) {
        cout << "arrayA[" << i << "] - " << arrayA[i] << endl;
    }

    cout << endl;

    // Initialize an array without declaration
    double arrayB[] = {0.1, 0.2, 0.3, 0.4};  // it is not necessary to specify the size of the array

    for (int i = 0; i < N; i++) {
        cout << "arrayB[" << i << "] - " << arrayB[i] << endl;
    }

    cout << endl;

    // Matrices or multi-dimensional arrays
    int arrayC[N][N];

    cout << "arrayC - Matrix" << N << "x" << N << endl;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            arrayC[i][j] = i*N + j;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << arrayC[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}