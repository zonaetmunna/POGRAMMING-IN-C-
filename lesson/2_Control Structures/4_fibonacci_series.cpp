#include <iostream>

int main() {
    int n, first = 0, second = 1, next;

    std::cout << "Enter the number of terms: ";
    std::cin >> n;

    std::cout << "Fibonacci Series: ";

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        std::cout << next << " ";
    }

    std::cout << std::endl;

    return 0;
}
