#include <iostream>

int main() {
    int start, end;

    std::cout << "Enter the range (start and end): ";
    std::cin >> start >> end;

    std::cout << "Numbers in the range " << start << " to " << end << ": ";

    while (start <= end) {
        std::cout << start << " ";
        start++;
    }

    std::cout << std::endl;

    return 0;
}
