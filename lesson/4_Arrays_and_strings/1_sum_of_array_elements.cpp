#include <iostream>

int main() {
    int arr[] = {5, 3, 8, 2, 7};
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    std::cout << "Sum of array elements: " << sum << std::endl;

    return 0;
}
