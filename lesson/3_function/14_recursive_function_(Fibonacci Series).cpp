//14. Recursive Function (Fibonacci Series)
#include <iostream>

// Function declaration
int fibonacci(int n);

int main() {
    int n;
    std::cout << "Enter the number of terms: ";
    std::cin >> n;

    std::cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        std::cout << fibonacci(i) << " ";
    }
    std::cout << std::endl;

    return 0;
}

// Recursive function definition
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
