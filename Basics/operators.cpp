#include <iostream>

using namespace std;

int main() {
    // Support variables
    int a = 4;

    // Arithmetic operators
    cout << "### Arithmetic operators" << endl;
    cout << "+  : Addition operator which adds two operands. e.g.: 2 + 3 = " << 2 + 3 << endl;
    cout << "-  : Subtraction operator which subtracts two operands. e.g.: 7 - 3 = " << 7 - 3 << endl;
    cout << "*  : Multiplication operator which multiplies two operands. e.g.: 7 * 5 = " << 7 * 5 << endl;
    cout << "/  : Division operator which divides two operands. e.g.: 8 / 2 = " << 8 / 2 << endl;
    cout << "%%  : Modulus operator which returns the remainder of an interger division. e.g.: 7 %% 2 = " << 7 % 2 << endl;
    cout << "++ : Increment operator which increments an integer operand by one. e.g.: if a = " << a++ << " then a++ = " << a << endl; // Inverted arguments because is a post increment
    cout << "-- : Decrement operator which decrements an integer operand by one. e.g.: if a = " << a-- << " then a-- = " << a << endl; // Inverted arguments because is a post decrement
    
    // Relational operators
    cout << "### Relational operators" << endl;
    cout << "== : 'Equal' operator which checks if two operands are equal (true or 1) or not (false or 0). e.g.: 3 == 1 = " << (3 == 1) << endl;
    cout << "!= : 'Not equal' operator which checks if two operands are different (true or 1) or not (false or 0). e.g.: 4 != 5 = " << (4 != 5) << endl;
    cout << ">  : 'Greater than' operator which checks if an operand is greater than another (true or 1) or not (false or 0). e.g.: 5 > 4 = " << (5 > 4) << endl;
    cout << "<  : 'Less than' operator which checks if an operand is less than another (true or 1) or not (false or 0). e.g.: 8 < 7 = " << (8 < 7) << endl;
    cout << ">= : 'Greater than or equal to' operator which checks if an operand is greater than or equal to another (true or 1) or not (false or 0). e.g.: 5 >= 6 = " << (5 >= 6) << endl;
    cout << "<= : 'Less than or equal to' operator which checks if an operand is lass than or equal to another (true or 1) or not (false or 0). e.g.: 5 <= 5 = " << (5 <= 5) << endl;
    
    // Logical operators
    cout << "### Logical operators" << endl;
    cout << "&& : 'Logical AND' operator which checks if two operands are non zero (true or 1) or not (false or 0). e.g.: 3 && 0 = " << (3 && 0) << endl;
    cout << "|| : 'Logical OR' operator which checks if any of two operands is non zero (true or 1) or not (false or 0). e.g.: 5 || 0 = " << (5 || 0) << endl;
    cout << "!  : 'Logical NOT' operator which negates a current logical state. e.g.: !(5 == 5) = " << !(5 == 5) << endl;
    
    // Binary operators
    cout << "### Binary operators" << endl;
    cout << "&  : 'Binary AND' operator which applies a bitwise operation AND over two binary operands. e.g.: 1001 & 0101 = 0001 so 9 & 5 = " << (9 & 5) << endl;
    cout << "|  : 'Binary OR' operator which applies a bitwise operation OR over two binary operands. e.g.: 0100 & 1000 = 1100 so 4 | 8 = " << (4 | 8) << endl;
    cout << "^  : 'Binary XOR' operator which applies a bitwise operation XOR over two binary operands. e.g.: 1111 & 1011 = 0100 so 15 ^ 11 = " << (15 ^ 11) << endl;
    cout << "~  : 'Binary complement' operator which applies a bitwise negation and returns the complement. e.g.: ~1011 = -0100 so ~11 = " << ~11 << " where 11 + ~11 + 1 = " << (11 + ~11 + 1) << endl;
    cout << "<< : 'Binary left shift' operator which shifts (given a number of times) bitwisely the bits to the left. e.g.: 0001 << 2 = 0100 so 1 << 2 = " << (1 << 2) << endl;
    cout << ">> : 'Binary right shift' operator which shifts (given a number of times) bitwisely the bits to the right. e.g.: 1000 >> 3 = 0001 so 8 >> 3 = " << (8 >> 3) << endl;

    return 0;
}