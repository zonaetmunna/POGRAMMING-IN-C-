#include <iostream>

int main() {
    int num, sum = 0;

    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    std::cout << "Sum of digits: " << sum << std::endl;

    return 0;
}
