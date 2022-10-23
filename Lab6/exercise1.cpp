#include <iostream> //preprocessor directive.
using namespace std;
/*

    Calculate the sum of digits of a number. The program prompts the user to enter the number. For example:
    Enter number: 7865 The output should be 7+ 8 + 6 + 5 = 26.

*/

// function declaration
int getSum(int n){

    // important that sum is an integer
    int sum = 0;

    // keep looping until all places are calculated
    while (n != 0) {
        // making sum the right-most digit, then adding all the
        // following digits added to it
        sum = sum + n % 10;
        // removing right-most digit
        n = n / 10;
    }
    // return the answer
    return sum;
}

// main entry point
int main() {
   
    // declare variable
    int n = 7865;
 
    // Function call
    cout << getSum(n);

    return 0;
}
    