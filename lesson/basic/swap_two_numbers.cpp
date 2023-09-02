#include <iostream>

int main() {
    int a = 5, b = 10;

    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;

    int temp = a;
    a = b;
    b = temp;

    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

    return 0;
}
