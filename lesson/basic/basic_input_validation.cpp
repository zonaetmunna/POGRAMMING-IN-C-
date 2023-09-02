#include <iostream>

int main() {
    int age;

    do {
        std::cout << "Enter your age (0-120): ";
        std::cin >> age;
    } while (age < 0 || age > 120);

    std::cout << "Valid age entered: " << age << std::endl;

    return 0;
}
