#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    // Use a lambda function to find and print the number 5
    auto it = std::find_if(numbers.begin(), numbers.end(), [](int num) { return num == 5; });

    if (it != numbers.end()) {
        std::cout << "Found: " << *it << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }

    return 0;
}
