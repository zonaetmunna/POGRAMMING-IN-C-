#include <iostream>

// Abstract base class
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

// Concrete derived classes
class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle" << std::endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a rectangle" << std::endl;
    }
};

int main() {
    Circle circle;
    Rectangle rectangle;

    Shape* shapes[] = {&circle, &rectangle};

    for (Shape* shape : shapes) {
        shape->draw();
    }

    return 0;
}
