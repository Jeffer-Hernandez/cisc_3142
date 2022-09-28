#include <iostream> //preprocessor directive.
#include <vector> // importing vector types
using namespace std;

/*

Read a sequence of words from cin and store the values a vector. 
After you’ve read all the words,
process the vector and change each word to uppercase. 
Print the transformed elements, eight words to a
line. 

*/

// main 
int main() {

    // declare a vector and a string variable to cin to
    vector<string> vec;
    string s;

    // while the user enters more and more words (and populsting s via cin)
    while(cin >> s){
        // we keep adding them to the vector via the push_back method
        vec.push_back(s);
    }
    
    // loop through the vector to get each word
    for(string &s : vec){
        // (nested) loop through each character in each word 
        for(char &c : s){
            // convert the character to an uppercase character
            c = toupper(c);
        }
    }

    // loop through the every element in the vector
    for (int i = 0; i != vec.size(); i++){
        // checks the order number of "i", or the word in question 
        // if it is the 8th word in a row, end the line
        if (i != 0 && i % 8 == 0){
            cout << endl;
        }
        // printing each word with spaces behind/between them
        cout << vec[i] << " ";
    }

    

    return 0;
}
