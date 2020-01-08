#include <iostream>

using namespace std;

int main() {
    // String is an array of chars
    char stringA[5];
    stringA[0] = 'h';
    stringA[1] = 'e';
    stringA[2] = 'l';
    stringA[3] = 'l';
    stringA[4] = 'o';
    stringA[5] = '\0'; // null terminator
    cout << stringA << ", world!" << endl;

    // Initializer without declaration
    char stringB[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    cout << stringB << ", World!" << endl;

    char stringC[] = "HELLO";
    cout << stringC << ", WORLD!" << endl;

    return 0;
}