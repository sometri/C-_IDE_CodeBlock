// Including the iostream header file
#include <iostream>

// Using the std namespace
using namespace std;

// Main function
int main() {
    // Using cout from the std namespace without prefix
    cout << "Hello, world!" << endl;

    // Using cin from the std namespace without prefix
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "You entered: " << number << endl;

    // Returning 0 to indicate successful completion
    return 0;
}
