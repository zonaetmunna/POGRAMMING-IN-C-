#include <iostream>

// Base class
class Animal {
public:
    void speak() {
        std::cout << "Animal speaks" << std::endl;
    }
};

// Intermediate derived class
class Mammal : public Animal {
public:
    void breathe() {
        std::cout << "Mammal breathes" << std::endl;
    }
};

// Derived class
class Dog : public Mammal {
public:
    void bark() {
        std::cout << "Dog barks" << std::endl;
    }
};

int main() {
    Dog dog;
    dog.speak();
    dog.breathe();
    dog.bark();

    return 0;
}

