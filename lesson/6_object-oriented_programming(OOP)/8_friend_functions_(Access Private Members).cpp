#include <iostream>

class Rectangle; // Forward declaration

// Friend function
void printArea(const Rectangle& rect);

// Class representing a rectangle
class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle(int l, int w) : length(l), width(w) {}

    // Friend declaration
    friend void printArea(const Rectangle& rect);
};

// Friend function definition
void printArea(const Rectangle& rect) {
    int area = rect.length * rect.width;
    std::cout << "Area: " << area << std::endl;
}

int main() {
    Rectangle rectangle(5, 3);
    printArea(rectangle);

    return 0;
}
