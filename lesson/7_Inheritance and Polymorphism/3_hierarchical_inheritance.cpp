#include <iostream>

// Base class
class Animal {
public:
    void speak() {
        std::cout << "Animal speaks" << std::endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog barks" << std::endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        std::cout << "Cat meows" << std::endl;
    }
};

int main() {
    Dog dog;
    Cat cat;

    dog.speak();
    dog.bark();

    cat.speak();
    cat.meow();

    return 0;
}
