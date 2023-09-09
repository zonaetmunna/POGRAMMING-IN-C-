#include <iostream>

// Base class
class Animal {
public:
    virtual void speak() {
        std::cout << "Animal speaks" << std::endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void speak() override {
        std::cout << "Dog barks" << std::endl;
    }
};

int main() {
    Animal* animalPtr;
    Dog dog;

    animalPtr = &dog;
    animalPtr->speak();

    return 0;
}
