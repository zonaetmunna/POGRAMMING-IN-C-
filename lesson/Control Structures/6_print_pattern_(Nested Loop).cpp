#include <iostream>

int main() {
    int n;

    std::cout << "Enter the number of rows: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0;
}
