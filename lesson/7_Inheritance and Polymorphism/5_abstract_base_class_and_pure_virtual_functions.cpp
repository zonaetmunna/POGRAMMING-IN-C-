#include <iostream>

// Abstract base class
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle" << std::endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a rectangle" << std::endl;
    }
};

int main() {
    Shape* shapes[2];
    shapes[0] = new Circle();
    shapes[1] = new Rectangle();

    for (int i = 0; i < 2; i++) {
        shapes[i]->draw();
        delete shapes[i];
    }

    return 0;
}
