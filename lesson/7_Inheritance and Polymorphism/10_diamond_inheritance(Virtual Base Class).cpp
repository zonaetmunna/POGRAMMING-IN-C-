#include <iostream>

// Virtual base class
class Animal {
public:
    Animal(const std::string& n) : name(n) {}

    void speak() {
        std::cout << name << " speaks" << std::endl;
    }

private:
    std::string name;
};

// Derived classes
class Dog : public virtual Animal {
public:
    Dog(const std::string& n) : Animal(n) {}
};

class Cat : public virtual Animal {
public:
    Cat(const std::string& n) : Animal(n) {}
};

// Derived class inheriting from Dog and Cat
class Pet : public Dog, public Cat {
public:
    Pet(const std::string& n) : Animal(n), Dog(n), Cat(n) {}
};

int main() {
    Pet pet("Buddy");
    pet.speak(); // Avoids ambiguity using virtual base class

    return 0;
}
