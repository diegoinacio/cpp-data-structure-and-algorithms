#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    cout << "The number of arguments is: " << (argc - 1) << endl;
    cout << "p.s.: The argument 0 is: " << (argv[0]) << endl;
    for (int i = 1; i < argc; i++) {
        cout << "argv[" << i << "] = " << argv[i] << endl;
    }

    return 0;
}