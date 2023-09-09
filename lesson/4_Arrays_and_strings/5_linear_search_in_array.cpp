#include <iostream>

int main() {
    int arr[] = {5, 3, 8, 2, 7};
    int target = 8;
    bool found = false;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == target) {
            found = true;
            break;
        }
    }

    if (found) {
        std::cout << target << " found in the array." << std::endl;
    } else {
        std::cout << target << " not found in the array." << std::endl;
    }

    return 0;
}
