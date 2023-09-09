#include <iostream>

// Function declaration with reference parameters
void swap(int &a, int &b);

int main() {
    int x = 5, y = 3;
    std::cout << "Before Swap: x = " << x << ", y = " << y << std::endl;

    // Function call with reference parameters
    swap(x, y);

    std::cout << "After Swap: x = " << x << ", y = " << y << std::endl;

    return 0;
}

// Function definition
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
