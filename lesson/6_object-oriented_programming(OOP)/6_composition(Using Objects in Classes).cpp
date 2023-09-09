#include <iostream>

// Class representing a point
class Point {
private:
    int x;
    int y;

public:
    Point(int _x, int _y) : x(_x), y(_y) {}

    void display() {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};

// Class representing a line segment
class Line {
private:
    Point start;
    Point end;

public:
    Line(int startX, int startY, int endX, int endY) : start(startX, startY), end(endX, endY) {}

    void draw() {
        std::cout << "Line from ";
        start.display();
        std::cout << "to ";
        end.display();
    }
};

int main() {
    Line line(1, 2, 3, 4);
    line.draw();

    return 0;
}
