#include <iostream>

int main() {
    int n, sum = 0;

    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }

    std::cout << "Sum of even numbers from 2 to " << n << ": " << sum << std::endl;

    return 0;
}
