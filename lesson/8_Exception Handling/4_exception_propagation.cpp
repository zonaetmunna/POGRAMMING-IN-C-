#include <iostream>
#include <stdexcept>

void functionC() {
    throw std::runtime_error("Exception from functionC");
}

void functionB() {
    functionC();
}

void functionA() {
    try {
        functionB();
    } catch (const std::exception& ex) {
        std::cerr << "Exception caught in functionA: " << ex.what() << std::endl;
    }
}

int main() {
    functionA();

    return 0;
}
