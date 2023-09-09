#include <iostream>

// Base class
class Shape {
protected:
    int width;
    int height;

public:
    Shape(int w, int h) : width(w), height(h) {}

    virtual int area() {
        return 0;
    }
};

// Derived class
class Rectangle : public Shape {
public:
    Rectangle(int w, int h) : Shape(w, h) {}

    int area() override {
        return width * height;
    }
};

int main() {
    Rectangle rectangle(5, 3);
    Rectangle rectangle2(5,6);

    std::cout << "Area of Rectangle: " << rectangle.area() << std::endl;
    std::cout << "area of 2nd rectangle: "<<rectangle2.area() <<std::endl;

    return 0;
}
