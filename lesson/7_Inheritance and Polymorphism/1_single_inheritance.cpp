#include <iostream>

// Base class
class Animal {
public:
    void speak() {
        std::cout << "Animal speaks" << std::endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog barks" << std::endl;
    }
};

int main() {
    Dog dog;
    dog.speak();
    dog.bark();

    return 0;
}
