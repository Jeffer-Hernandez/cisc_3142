#include <iostream> //preprocessor directive.
using namespace std;

/*
Write a program to print the size of each of the built-in types.
*/

// main 
int main() {

    // found a list of all built in types and used "sizeof" function to find the 
    // size
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;
    cout << "Size of short: " << sizeof(short) << " bytes" << endl;
    cout << "Size of long: " << sizeof(long) << " bytes" << endl;
    cout << "Size of signed char: " << sizeof(signed char) << " bytes" << endl;
    cout << "Size of unsigned char: " << sizeof(unsigned char) << " bytes" << endl;
    cout << "Size of long double: " << sizeof(long double) << " bytes" << endl;

    return 0;
}
