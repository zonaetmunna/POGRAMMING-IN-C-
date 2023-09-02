#include <iostream>

class Complex {
public:
    double real;
    double imag;

    Complex() : real(0.0), imag(0.0) {}

    Complex(double r, double i) : real(r), imag(i) {}

    // Operator overloading using functions
    Complex operator + (const Complex& other) {
        Complex temp;
        temp.real = real + other.real;
        temp.imag = imag + other.imag;
        return temp;
    }
};

int main() {
    Complex num1(2.0, 3.0);
    Complex num2(1.5, 2.5);

    Complex sum = num1 + num2;

    std::cout << "Sum: " << sum.real << " + " << sum.imag << "i" << std::endl;

    return 0;
}
