#include <iostream>

int main() {
    double length, width, area;

    std::cout << "Enter length of rectangle: ";
    std::cin >> length;

    std::cout << "Enter width of rectangle: ";
    std::cin >> width;

    area = length * width;

    std::cout << "Area of rectangle: " << area << std::endl;

    return 0;
}
