#include <iostream>
#include <limits>
int main() {
    std::cout << "Hello, world!" << std::endl;

    int number;
    std::cout << "Enter a number: ";
    if (!(std::cin >> number)) {
        std::cout << "Invalid input. Please enter a valid number." << std::endl;
        // Clear the input stream and ignore any remaining characters
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } else {
        std::cout << "You entered: " << number << std::endl;
    }

    return 0;
}
