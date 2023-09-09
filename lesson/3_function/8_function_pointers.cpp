#include <iostream>

// Function declaration
int add(int a, int b);
int subtract(int a, int b);

int main() {
    // Define function pointers
    int (*operation)(int, int);

    // Assign function addresses to pointers
    operation = add;
    std::cout << "Addition: " << operation(5, 3) << std::endl;

    operation = subtract;
    std::cout << "Subtraction: " << operation(5, 3) << std::endl;

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}
