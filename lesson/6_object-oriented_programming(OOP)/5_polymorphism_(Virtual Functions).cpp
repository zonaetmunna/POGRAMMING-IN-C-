#include <iostream>

// Base class
class Animal {
public:
    virtual void sound() {
        std::cout << "Animal makes a sound" << std::endl;
    }
};

// Derived classes
class Dog : public Animal {
public:
    void sound() override {
        std::cout << "Dog barks" << std::endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        std::cout << "Cat meows" << std::endl;
    }
};

int main() {
    Animal* animals[] = {new Dog(), new Cat()};

    for (Animal* animal : animals) {
        animal->sound();
        delete animal;
    }

    return 0;
}
