#include <iostream>
#include <stack>

int main() {
    std::stack<int> numbers;

    numbers.push(1);
    numbers.push(2);
    numbers.push(3);

    while (!numbers.empty()) {
        std::cout << numbers.top() << " ";
        numbers.pop();
    }
    std::cout << std::endl;

    return 0;
}
