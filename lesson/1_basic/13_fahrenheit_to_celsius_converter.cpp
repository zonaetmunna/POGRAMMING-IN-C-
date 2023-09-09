#include <iostream>

int main() {
    double fahrenheit, celsius;

    std::cout << "Enter temperature in Fahrenheit: ";
    std::cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5/9;

    std::cout << "Temperature in Celsius: " << celsius << std::endl;

    return 0;
}
