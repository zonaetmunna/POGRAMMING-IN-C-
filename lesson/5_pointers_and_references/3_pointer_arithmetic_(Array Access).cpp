#include <iostream>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr = arr;

    for (int i = 0; i < 5; i++) {
        std::cout << "Element " << i << ": " << *ptr << std::endl;
        ptr++;
    }

    return 0;
}
