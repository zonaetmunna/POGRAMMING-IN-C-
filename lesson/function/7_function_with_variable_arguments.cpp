#include <iostream>

// Function template with variable arguments
template<typename... Args>
void printArgs(Args... args);

int main() {
    printArgs(1, "Hello", 3.14, 'A');

    return 0;
}

// Function template definition
template<typename... Args>
void printArgs(Args... args) {
    ((std::cout << args << " "), ...);
    std::cout << std::endl;
}
