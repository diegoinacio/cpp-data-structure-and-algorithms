#include <iostream>

using namespace std;

int main() {
    // Integer literals
    cout << "### Integer literals" << endl;
    cout << "10      : Decimal-literal has no suffix/prefix so 10 is " << 10 << " (decimal) [0-9]+" << endl;
    cout << "0b11    : Binary-literal has the prefix 0b or 0B so 0b11 is " << 0b11 << " (decimal) 0[bB][01]+" << endl;
    cout << "0725    : Octal-literal has the prefix 0 so 0725 is " << 0725 << " (decimal) 0[0-7]+" << endl;
    cout << "0xA4    : Hexadecimals-literal has the prefix 0x or 0X so 0xA4 is " << 0xA4 << " (decimal) 0[xX][0-9a-fA-f]+" << endl;
    cout << "10u     : Unsigned literal has the suffix u so 10u is " << 10u << " (decimal) [0-9]+u" << endl;
    cout << "10l     : Long literal has the suffix l so 10l is " << 10l << " (decimal) [0-9]+l" << endl;
    cout << "10ul    : Unsigned Long literal has the suffix ul so 10ul is " << 10ul << " (decimal) [0-9]+ul" << endl;
    
    // Float point literals
    cout << "### Floating-pint literals" << endl;
    cout << "10.10   : Double literal so 10.10 is " << 10.10 << " [0-9]*\\.[0-9]*" << endl;
    cout << "2.7183f : Float literal so 2.7183f is " << 2.7183f << " [0-9]*\\.[0-9]*[fF]*" << endl;
    cout << "3.1416l : Long double literal so 2.7183l is " << 3.1416l << " [0-9]*\\.[0-9]*[lL]*" << endl;
    cout << "123e-3  : Exponential literal (base 10) so 123e-3 is " << 123e-3 << " [0-9]*\\.?[0-9]+[eE][+-]?[0-9]+" << endl;

    return 0;
}