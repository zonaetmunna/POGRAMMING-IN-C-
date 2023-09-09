#include <iostream>

int main() {
    int* arr = new int[5];

    for (int i = 0; i < 5; i++) {
        arr[i] = i * 2;
    }

    std::cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}
