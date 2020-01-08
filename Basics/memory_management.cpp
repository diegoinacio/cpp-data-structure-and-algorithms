#include <iostream> // cout, endl
#include <stdlib.h> // malloc, calloc, realloc and free

#define FAIL(void) {cout << "Memory cannot be allocated!" << endl; exit(EXIT_FAILURE);}
#define ARRAY_I(n, a) for(int i = 0; i < n; i++) a[i] = (float)i/(n - 1)  // Init array
#define ARRAY_P(n, a) for(int i = 0; i < n; i++) cout << a[i] << " "   // Print array

using namespace std;


int main() {
    float *arrayA, *arrayB;
    int N = 8;
    // Using malloc. One argument and init elements with garbage
    arrayA = (float*)malloc(N*sizeof(float));
    if(arrayA == NULL) FAIL();
    cout << "Uninitialized arrayA | ";
    ARRAY_P(N, arrayA);
    cout << endl;
    ARRAY_I(N, arrayA);
    cout << "  Initialized arrayA | ";
    ARRAY_P(N, arrayA);
    cout << endl;

    // Using calloc. One argument and init elements with 0
    arrayB = (float*)calloc(N, sizeof(float));
    if(arrayB == NULL) FAIL();
    cout << "Uninitialized arrayB | ";
    ARRAY_P(N, arrayB);
    cout << endl;
    ARRAY_I(N, arrayB);
    cout << "  Initialized arrayB | ";
    ARRAY_P(N, arrayB);
    cout << endl;

    // Using realloc to reallocate existing allocations
    arrayB = (float*)realloc(arrayB, 2*N*sizeof(float));
    if(arrayB == NULL) FAIL();
    cout << "  Reallocated arrayB | ";
    ARRAY_P(2*N, arrayB);
    cout << endl;

    // Release the block of allocated memory
    free(arrayA);
    free(arrayB);

    return 0;
}