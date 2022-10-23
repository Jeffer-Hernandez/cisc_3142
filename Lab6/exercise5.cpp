//#lab processing problem
#include <iostream>//header files
using namespace std;

int main()
{
    float weight = 45400; // weight of person in grams
    float sweetenerInSoda = 0.001;   // 1/10th of 1%
    float sodaMass = 350; 
    int numOfSodas = 0;
    float sweetenerLethalDose = (weight/7); //ratio 5gm sweetner for 35gm weight

    numOfSodas = sweetenerLethalDose / sweetenerInSoda;

    cout<<"\nYou can consume "<< numOfSodas <<" diet sodas before you die, friend.\n";
    return 0;
}