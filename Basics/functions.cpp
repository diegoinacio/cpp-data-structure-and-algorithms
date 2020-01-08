#include <iostream>

using namespace std;

// Funcation declaration

int func_add(int argA, int argB); // will be defined after main()

int func_mult(int argA, int argB) {
    // Returns the integer multiplication between the arguments
    return argA*argB;
}

void func_void() {
    // Returns nothing.. just print
    cout << "This function does not return anything because it is void" << endl;
}

int main() {
    // Support variables
    int a, b, c;

    // Calls the function which adds.
    // Declarated before but defined after main.
    a = 10;
    b = 20;
    c = func_add(a, b);
    cout << "The sum of " << a << " and " << b << " is " << c << endl;

    // Calls the function which multiplies.
    a = 2;
    b = 3;
    c = func_mult(a, b);
    cout << "The multiplication of " << a << " by " << b << " is " << c << endl;

    // Calls the void function
    func_void();

    return 0;
}

int func_add(int argA, int argB) {
    // Returns the integer addition between the arguments
    return argA + argB;
}