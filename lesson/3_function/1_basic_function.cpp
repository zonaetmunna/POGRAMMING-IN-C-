#include <iostream>

// Function declaration
int add(int a, int b);

int main() {
    // Function call
    int result = add(5, 3);
    std::cout << "Result: " << result << std::endl;
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
