#include <iostream>

// Base class
class Vehicle {
public:
    void start() {
        std::cout << "Vehicle started" << std::endl;
    }
};

// Derived class
class Car : public Vehicle {
public:
    void drive() {
        start(); // Accessing base class member
        std::cout << "Car is driving" << std::endl;
    }
};

int main() {
    Car car;
    car.drive();

    return 0;
}
