#include <iostream> //preprocessor directive.

// main entry point
int main() {
    
    // write a message to console
    std::cout << "Running exercise 3, Lab 2... " << std:: endl;
    std::cout << "Enter two numbers:" << std:: endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "We're using a FOR loop on this one: " << std:: endl;
    for (int i = v1; i < v2; i++){
        std::cout << i << std::endl;  
    }
    
    return 0;
}
