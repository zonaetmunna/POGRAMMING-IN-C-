#include <iostream>

int main() {
    double weight, height;

    std::cout << "Enter weight (in kg): ";
    std::cin >> weight;

    std::cout << "Enter height (in meters): ";
    std::cin >> height;

    double bmi = weight / (height * height);

    std::cout << "Your BMI is: " << bmi << std::endl;

    return 0;
}
