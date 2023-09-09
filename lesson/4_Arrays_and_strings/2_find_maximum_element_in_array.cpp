#include <iostream>

int main() {
    int arr[] = {5, 3, 8, 2, 7};
    int max = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    std::cout << "Maximum element in array: " << max << std::endl;

    return 0;
}
