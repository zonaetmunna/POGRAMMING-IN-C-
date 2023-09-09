#include <iostream>

int main() {
    double num1, num2, num3;

    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    double largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    std::cout << "Largest number: " << largest << std::endl;

    return 0;
}
