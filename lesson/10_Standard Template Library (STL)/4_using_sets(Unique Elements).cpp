#include <iostream>
#include <set>

int main() {
    std::set<int> numbers;

    numbers.insert(5);
    numbers.insert(2);
    numbers.insert(8);

    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
