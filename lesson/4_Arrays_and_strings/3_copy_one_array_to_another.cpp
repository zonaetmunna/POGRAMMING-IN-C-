#include <iostream>

int main() {
    int source[] = {5, 3, 8, 2, 7};
    int destination[5];

    for (int i = 0; i < 5; i++) {
        destination[i] = source[i];
    }

    std::cout << "Contents of destination array: ";
    for (int i = 0; i < 5; i++) {
        std::cout << destination[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
