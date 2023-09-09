#include <iostream>

// Class representing a complex number
class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r, double i) : real(r), imag(i) {}

    Complex operator + (const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    void display() {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    Complex num1(2.0, 3.0);
    Complex num2(1.5, 2.5);

    Complex sum = num1 + num2;

    sum.display();

    return 0;
}
