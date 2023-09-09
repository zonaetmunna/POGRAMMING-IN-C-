#include <iostream>

int main() {
    int num, reversed = 0;

    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    std::cout << "Reversed number: " << reversed << std::endl;

    return 0;
}
