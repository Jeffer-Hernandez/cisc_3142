#include <iostream>
using namespace std;

/*

    Write a program that finds and prints all the prime numbers between 3 and 
    100. A prime number is a number such that 1 and itself are the only numbers 
    that evenly divide it (for example, 3, 5, 7, 11, 13, 17,...).

*/

// function to check if a given number is prime
bool isPrime(int n)
{
    // since 0 and 1 is not prime return false.
    if (n == 1 || n == 0)
        return false;
  
    // Run a loop from 2 to n-1
    for (int i = 2; i < n; i++) {
        // if the number is divisible by i, then n is not a
        // prime number.
        if (n % i == 0)
            return false;
    }
    // otherwise, n is prime number.
    return true;
}
  
// main entry point
int main()
{
    int n = 100;
  
    // check for every number from 1 to N
    for (int i = 1; i <= n; i++) {
        // check if current number is prime
        if (isPrime(i))
            cout << i << " ";
    }
  
    return 0;
}