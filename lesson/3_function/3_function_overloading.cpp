#include <iostream>

// Function overloading
int add(int a, int b);
double add(double a, double b);

int main() {
    int intResult = add(5, 3);
    double doubleResult = add(2.5, 3.7);

    std::cout << "Integer Result: " << intResult << std::endl;
    std::cout << "Double Result: " << doubleResult << std::endl;

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

