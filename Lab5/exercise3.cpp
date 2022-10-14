#include <iostream>
#include <fstream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

/*

    Write a program that reads a file containing a pair of numbers in each line
    (representing x y coordinates); at the end of reading this file compute
    the linear regression for this set of numbers. Please use to the
    linear regression formulas mentioned in class (if you missed class, find a
    classmate to get notes).

*/

double slope(const vector<double> &x, const vector<double> &y)
{
    double n = x.size();
    double s_x = accumulate(x.begin(), x.end(), 0.0);
    double s_y = accumulate(y.begin(), y.end(), 0.0);
    double s_xx = inner_product(x.begin(), x.end(), x.begin(), 0.0);
    double s_xy = inner_product(x.begin(), x.end(), y.begin(), 0.0);
    double a = (n * s_xy - s_x * s_y) / (n * s_xx - s_x * s_x);
    return a;
}

int main()
{
    // declare variables, vectors
    int i;
    vector<double> x(6);
    vector<double> y(6);

    // read from file
    ifstream inFile;
    inFile.open("Lab5/data.txt");

    if (!inFile)
    {
        cerr << "Unable to open file data.txt";
        exit(1); // call system to stop
    }

    // loop through the file line by line
    while (inFile >> i)
    {
        inFile >> y[i];
        inFile >> x[i];
    }

    cout << slope(x, y) << '\n';

    inFile.close();
    return 0;
}