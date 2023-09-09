#include <iostream>

// Class declaration
class Rectangle {
private:
    int length;
    int width;

public:
    // Constructor
    Rectangle(int l, int w) : length(l), width(w) {}

    // Member function to calculate area
    int calculateArea() {
        return length * width;
    }
};

int main() {
    // Create objects
    Rectangle rectangle1(5, 3);
    Rectangle rectangle2(4, 6);
    Rectangle rectangle3(5, 6);



    // Calculate and display area
    std::cout << "Area of Rectangle 1: " << rectangle1.calculateArea() << std::endl;
    std::cout << "Area of Rectangle 2: " << rectangle2.calculateArea() << std::endl;
    std::cout << "area of rectangle 3:" <<rectangle3.calculateArea() <<std::endl;

    return 0;
}
