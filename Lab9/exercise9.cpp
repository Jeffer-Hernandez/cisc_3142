#include <iostream>
#include <iterator>
#include <fstream>
#include <numeric>
#include <vector>
#include <algorithm> // for copy
using namespace std;

// Function to compute moving average
// of previous K elements
void ComputeMovingAverage(vector<double> vec, int N,
                          int K)
{
    int i;
    float sum = 0;
 
    // Initial sum of K elements.
    for (i = 0; i < K; i++) {
        sum += vec[i];
        cout << setprecision(2) << fixed;
        cout << sum / K << " ";
    }
 
    // Compute MA from index K
    float avg;
    for (i = K; i < N; i++) {
        sum -= vec[i - K];
        sum += vec[i];
        avg = sum / K;
        cout << setprecision(2) << fixed;
        cout << avg << " ";
    }
}

int main()
{
  fstream is("weather.csv");
  istream_iterator<double> start(is), end;
  vector<double> numbers(start, end);
  cout << "Read " << numbers.size() << " numbers" << endl;

  // print the numbers to stdout
  cout << "numbers read in:\n";
  copy(numbers.begin(), numbers.end(), 
            ostream_iterator<double>(cout, " "));
  cout << endl;

  // get simple average of all months
  double simpleAverage = accumulate(numbers.begin(), numbers.end(), 0.0) / numbers.size();


    int N = numbers.size();
    int K = 3;
    
    cout << "Moving average : ";
    ComputeMovingAverage(numbers, N, K);

}