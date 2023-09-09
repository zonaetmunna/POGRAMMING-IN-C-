#include <iostream>

int main() {
    int number = 42;
    int* ptr = &number;

    std::cout << "Value of number: " << *ptr << std::endl;

    return 0;
}
