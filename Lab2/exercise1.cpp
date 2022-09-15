#include <iostream> //preprocessor directive.

// main entry point
int main() {
    
    // write a message to console
    std::cout << "Running exercise 1, Lab 2... " << std:: endl;
    std::cout << "Enter two numbers:" << std:: endl;
    int v1 = 0, v2 = 0, i=0;
    std::cin >> v1 >> v2;
 
    std::cout << "The sum of " << v1;
    std::cout << "and " << v2;
    std::cout << "is " << v1 + v2 << std::endl;

    

    return 0;
}
