#include <iostream>

// Function declaration
int factorial(int n);

int main() {
    int n;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;

    int result = factorial(n);

    std::cout << "Factorial of " << n << ": " << result << std::endl;

    return 0;
}

// Recursive function definition
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
