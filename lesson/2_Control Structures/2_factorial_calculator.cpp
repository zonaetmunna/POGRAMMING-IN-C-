#include <iostream>

int main() {
    int n, factorial = 1;

    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
        std::cout<<"per value"<<factorial<< std::endl;
    }

    std::cout << "Factorial of " << n << ": " << factorial << std::endl;

    return 0;
}
