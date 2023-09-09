#include <iostream>

// Base class
class Animal {
protected:
    void speak() {
        std::cout << "Animal speaks" << std::endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        speak(); // Accessing protected member
        std::cout << "Dog barks" << std::endl;
    }
};

int main() {
    Dog dog;
    dog.bark();

    return 0;
}
