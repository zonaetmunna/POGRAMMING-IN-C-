#include <iostream>

int main() {
    // Lambda function
    auto add = [](int a, int b) {
        return a + b;
    };

    int result = add(5, 3);
    std::cout << "Result: " << result << std::endl;

    return 0;
}
