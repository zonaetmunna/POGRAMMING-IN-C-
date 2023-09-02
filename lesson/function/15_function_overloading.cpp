#include <iostream>

// Function overloading with varied parameter types
int sum(int a, int b) {
    return a + b;
}

double sum(double a, double b) {
    return a + b;
}

int main() {
    int intSum = sum(5, 3);
    double doubleSum = sum(2.5, 3.7);

    std::cout << "Sum (int): " << intSum << std::endl;
    std::cout << "Sum (double): " << doubleSum << std::endl;

    return 0;
}
