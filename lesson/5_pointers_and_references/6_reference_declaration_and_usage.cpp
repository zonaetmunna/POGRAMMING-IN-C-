#include <iostream>

int main() {
    int number = 42;
    int& ref = number;

    std::cout << "Value of number: " << ref << std::endl;

    return 0;
}
