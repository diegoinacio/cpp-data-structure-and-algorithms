#include <iostream>

using namespace std;

int main() {
    // Bool
    cout << "Size of 'bool' in bytes               : " << sizeof(bool) << endl;
    
    // Char
    cout << "Size of 'char' in bytes               : " << sizeof(char) << endl;
    cout << "Size of 'signed char' in bytes        : " << sizeof(signed char) << " [-128 to 127]" << endl;
    cout << "Size of 'unsigned char' in bytes      : " << sizeof(unsigned char) << " [0 to 255]" << endl;
    
    // Int
    cout << "Size of 'int' in bytes                : " << sizeof(int) << endl;
    cout << "Size of 'signed int' in bytes         : " << sizeof(signed int) << " [-2147483648 to 2147483647]" << endl;
    cout << "Size of 'unsigned int' in bytes       : " << sizeof(unsigned int) << " [0 to 4294967295]" << endl;
    
    // Short int
    cout << "Size of 'short int' in bytes          : " << sizeof(short int) << endl;
    cout << "Size of 'signed short int' in bytes   : " << sizeof(signed short int) << " [-32768  to 32767]" << endl;
    cout << "Size of 'unsigned short int' in bytes : " << sizeof(unsigned short int) << " [0 to 65535]" << endl;
    
    // Long int
    cout << "Size of 'long int' in bytes           : " << sizeof(long int) << endl;
    cout << "Size of 'signed long int' in bytes    : " << sizeof(signed long int) << " [-9223372036854775808  to 9223372036854775807]" << endl;
    cout << "Size of 'unsigned long int' in bytes  : " << sizeof(unsigned long int) << " [0 to 18446744073709551615]" << endl;
    
    // Float point type
    cout << "Size of 'float' in bytes              : " << sizeof(float) << endl;
    cout << "Size of 'double' in bytes             : " << sizeof(double) << endl;
    cout << "Size of 'long double' in bytes        : " << sizeof(long double) << endl;

    return 0;
}