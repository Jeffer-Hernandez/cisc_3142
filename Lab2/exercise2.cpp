#include <iostream> //preprocessor directive.

// main entry point
int main() {
    
    // write a message to console
    std::cout << "Running exercise 2, Lab 2... " << std:: endl;
    std::cout << "Enter two numbers:" << std:: endl;
    int v1 = 0, v2 = 0, i=0;
    std::cin >> v1 >> v2;
    i = v1;
    std::cout << "We're using a WHILE loop for this one: " << std:: endl;
    while (i <v2){
      std::cout << i++ << std::endl;  
    }
    
    return 0;
}
