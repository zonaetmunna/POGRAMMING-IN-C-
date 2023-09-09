#include <iostream>

int main() {
    int number = 42;
    int* ptr = &number;
    int*& refPtr = ptr;

    std::cout << "Value of number: " << *refPtr << std::endl;

    return 0;
}
