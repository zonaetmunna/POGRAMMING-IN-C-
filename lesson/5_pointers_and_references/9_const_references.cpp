#include <iostream>

void printValue(const int& num) {
    // num++; // Error: Cannot modify a const reference
    std::cout << "Value: " << num << std::endl;
}

int main() {
    int value = 10;
    printValue(value);

    return 0;
}
