#include <iostream>

int main() {
    double celsius, fahrenheit;

    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;

    fahrenheit = (celsius * 9/5) + 32;

    std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;

    return 0;
}
