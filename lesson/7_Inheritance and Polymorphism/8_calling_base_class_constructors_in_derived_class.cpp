#include <iostream>

// Base class
class Animal {
public:
    Animal(const std::string& n) : name(n) {
        std::cout << "Animal constructor" << std::endl;
    }

    void speak() {
        std::cout << name << " speaks" << std::endl;
    }

private:
    std::string name;
};

// Derived class
class Dog : public Animal {
public:
    Dog(const std::string& n) : Animal(n) {
        std::cout << "Dog constructor" << std::endl;
    }

    void bark() {
        speak(); // Accessing base class member
        std::cout << "Dog barks" << std::endl;
    }
};

int main() {
    Dog dog("Buddy");
    dog.bark();

    return 0;
}
