// Including the iostream header file
#include <iostream>

// Main function
int main() {
    // Using cout from the std namespace with prefix
    std::cout << "Hello, world!" << std::endl;

    // Using cin from the std namespace with prefix
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "You entered: " << number << std::endl;

    // Returning 0 to indicate successful completion
    return 0;
}
