#include <iostream> //preprocessor directive.
using namespace std;

// main 
int main() {

    //Declaration of variables
	double itemPrice;
	double inflation;
	int years; 
	char repeatOption;

    ///Program asks for the cost of the item,
    //the number of years from now that the item will be purchased,
    //and the rate of inflation
    cout<<"Please enter the cost of the item: ";
    cin>>itemPrice;

    cout<<"Please the number of years from now that the item will be purchased: ";
    cin>>years;

    cout<<"Please enter the rate of inflation: ";
    cin>>inflation;

   //Calculate the estimated cost of the item 
    //after the specified period and print output
    inflation/= 100;

    for (int i=0; i<years; i++){
        itemPrice *= (1 + inflation);
    } 

    cout<<"Estimated cost of the item after  "<< years <<" will be: "<< itemPrice << endl;

    return 0;
}
