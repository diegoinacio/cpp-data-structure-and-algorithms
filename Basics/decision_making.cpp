#include <iostream>

using namespace std;

int main() {
    // Support variables
    int a, b;
    a = 10;
    b = 20;

    // if single statement
    if(b > a) cout << "b is greater than a so 'b > a' is true" << endl;

    // if multiple statement
    if(b > a) {
        cout << "a = " << a << " and b = " << b;
        cout << " so 'b' is greater than 'a'" << endl;
    }

    // if ... else statement
    if(a == b) {
        cout << "This statement is not going to be shown" << endl;
    }
    else {
        cout << "'a' is not equal to 'b' so 'a == b' is false" << endl;
    }

    // if ... else if statement
    if(a == b) {
        cout << "This statement is not going to be shown" << endl;
    }
    else if (b > a) {
        cout << "'b' is greater than 'a' ";
        cout << "so this second condition is true" << endl;
    }
    else {
        cout << "This statement is not going to be shown" << endl;
    }

    // Ternary operator ?: statement (expresion ? if true : else)
    cout << (a != b ? "'a' is not equal to 'b'" : "This statement is not going to be shown") << endl;

    // Switch and case
    switch (a) {
        case 20:
            cout << "'a' is not equal to 20" << endl;
            break;
        
        case 30:
            cout << "'a' is not equal to 30" << endl;
            break;
        
        default:
            cout << "'a' is equal to none of those cases ";
            cout << "so only the default statement will be shown" << endl;
            break;
    }

    return 0;
}