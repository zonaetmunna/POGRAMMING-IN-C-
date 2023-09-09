#include <iostream>

int main() {
    int choice, n;

    std::cout << "Menu-Driven Number Series" << std::endl;
    std::cout << "1. Print Even Numbers" << std::endl;
    std::cout << "2. Print Odd Numbers" << std::endl;
    std::cout << "Enter your choice (1/2): ";
    std::cin >> choice;

    std::cout << "Enter the value of n: ";
    std::cin >> n;

    std::cout << "Number Series: ";

    switch (choice) {
        case 1:
            for (int i = 2; i <= n; i += 2) {
                std::cout << i << " ";
            }
            break;
        case 2:
            for (int i = 1; i <= n; i += 2) {
                std::cout << i << " ";
            }
            break;
        default:
            std::cout << "Invalid choice." << std::endl;
            return 1;
    }

    std::cout << std::endl;

    return 0;
}
