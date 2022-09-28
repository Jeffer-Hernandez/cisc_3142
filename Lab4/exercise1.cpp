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

// main entry point
int main() {
    vector<string> vec;
    string s;
    while(cin >> s){
        vec.push_back(s);
    }
    
    for(string &s : vec){
        for(char &c : s){
            c = toupper(c);
        }
    }

    for (int i = 0; i != vec.size(); i++){
        if (i != 0 && i % 8 == 0){
            cout << endl;
        }
        cout << vec[i] << " ";
    }

    

    return 0;
}
