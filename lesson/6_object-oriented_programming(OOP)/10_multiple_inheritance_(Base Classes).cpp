#include <iostream>

// Base class 1
class Vehicle {
public:
    void start() {
        std::cout << "Vehicle started" << std::endl;
    }

    void stop() {
        std::cout << "Vehicle stopped" << std::endl;
    }
};

// Base class 2
class Engine {
public:
    void ignite() {
        std::cout << "Engine ignited" << std::endl;
    }

    void shutdown() {
        std::cout << "Engine shutdown" << std::endl;
    }
};

// Derived class inheriting from both base classes
class Car : public Vehicle, public Engine {
public:
    void drive() {
        std::cout << "Car is driving" << std::endl;
    }
};

int main() {
    Car car;
    car.start();
    car.ignite();
    car.drive();
    car.stop();
    car.shutdown();

    return 0;
}
