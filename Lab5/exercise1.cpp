#include <iostream> //preprocessor directive.
using namespace std;
    /*

    Calculate the sum of digits of a number. The program prompts the user to enter the number. For example:
    Enter number: 7865 The output should be 7+ 8 + 6 + 5 = 26.

    */

int getSum(int n){
    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

// main entry point
int main() {
   
    int n = 7865;
 
    // Function call
    cout << getSum(n);

    return 0;
}
    