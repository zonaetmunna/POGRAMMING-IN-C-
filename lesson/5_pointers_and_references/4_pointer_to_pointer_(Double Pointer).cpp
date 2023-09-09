#include <iostream>

int main() {
    int number = 42;
    int* ptr1 = &number;
    int** ptr2 = &ptr1;

    std::cout << "Value of number: " << **ptr2 << std::endl;

    return 0;
}
