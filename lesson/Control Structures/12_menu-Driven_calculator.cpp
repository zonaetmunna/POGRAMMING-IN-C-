#include <iostream>

int main() {
    int choice;
    double num1, num2;

    std::cout << "Menu-Driven Calculator" << std::endl;
    std::cout << "1. Addition" << std::endl;
    std::cout << "2. Subtraction" << std::endl;
    std::cout << "3. Multiplication" << std::endl;
    std::cout << "4. Division" << std::endl;
    std::cout << "Enter your choice (1/2/3/4): ";
    std::cin >> choice;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    double result;

    switch (choice) {
        case 1:
            result = num1 + num2;
            break;
        case 2:
            result = num1 - num2;
            break;
        case 3:
            result = num1 * num2;
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Error: Division by zero." << std::endl;
                return 1;
            }
            break;
        default:
            std::cout << "Invalid choice." << std::endl;
            return 1;
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}
