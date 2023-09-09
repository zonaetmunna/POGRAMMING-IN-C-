#include <iostream>

// Function declaration with default parameter
int multiply(int a, int b = 2);

int main() {
    int result1 = multiply(5);      // Uses default parameter
    int result2 = multiply(5, 3);   // Overrides default parameter

    std::cout << "Result 1: " << result1 << std::endl;
    std::cout << "Result 2: " << result2 << std::endl;

    return 0;
}

// Function definition
int multiply(int a, int b) {
    return a * b;
}
