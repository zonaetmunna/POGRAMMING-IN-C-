#include <iostream>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;

    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;

    int result = factorial(n);

    std::cout << "Factorial of " << n << ": " << result << std::endl;

    return 0;
}
