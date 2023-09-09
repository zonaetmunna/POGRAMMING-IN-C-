#include <iostream>

void modifyValue(int& ref) {
    ref *= 2;
}

int main() {
    int value = 5;
    modifyValue(value);

    std::cout << "Modified value: " << value << std::endl;

    return 0;
}
