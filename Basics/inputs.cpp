#include <iostream>

using namespace std;

int main() {
    char name[64];
    int age;
    
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;

    cout << "Your name is " << name << " and you are " << age << endl;

    return 0;
}