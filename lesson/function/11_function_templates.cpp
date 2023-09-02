#include <iostream>

// Function template
template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int intMax = maximum(5, 3);
    double doubleMax = maximum(2.5, 3.7);

    std::cout << "Maximum Integer: " << intMax << std::endl;
    std::cout << "Maximum Double: " << doubleMax << std::endl;

    return 0;
}
