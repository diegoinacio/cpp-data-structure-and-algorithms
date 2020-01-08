#include <iostream>

using namespace std;

class Array {
    public:
        int n;

        int * aRange(const int N) {
            n = N;
            int* array = new int[N];
            for (int i = 0; i < N; i++) {
                array[i] = i;
            }
            return array;
        }

        int * aRange(const int a, const int b) {
            const int N = b - a;
            n = N;
            int* array = new int[N];
            for (int i = 0; i < N; i++) {
                array[i] = a + i;
            }
            return array;
        }

        float * aRange(float a, float b, const int N) {
            n = N;
            float s = (b - a)/N;
            float* array = new float[N];
            for (int i = 0; i < N; i++) {
                array[i] = a + i*s;
            }
            return array;
        }
};

int main() {
    // Declare objects and variables
    Array a;
    int *A;
    float *B;

    // Method 01
    A = a.aRange(10);
    for (int i = 0; i < a.n ; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    // Method 02
    A = a.aRange(10, 20);
    for (int i = 0; i < a.n ; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    // Method 03
    B = a.aRange(0, 1, 8);
    for (int i = 0; i < a.n ; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}