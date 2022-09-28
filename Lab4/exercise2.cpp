#include <iostream>
#include <vector>
using namespace std;

/*
Write a program to create a vector with ten int elements. 
Using an iterator, assign each element a
value that is twice its current value. 
Test your program by printing the vector.
*/

int main()
{  
    // declare an int vector
    vector<int> num(10);

    // declare the initial value of 1
    int n = 1;

    // declare two int vector iterators for the while loop to stay in bounds
    vector<int>::iterator it = num.begin();
    vector<int>::iterator itEnd = num.end();

    // while we are still in the vector range
    while (it != itEnd)
    {   
        // assign the doubled value
        *it = n = n*2;
        // print the value
        cout << *it << " ";
        // increment the value by 1
        it++;
    }
}