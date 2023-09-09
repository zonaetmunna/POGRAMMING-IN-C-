#include <iostream>

void removeDuplicates(int arr[], int &size) {
    if (size <= 1) {
        return;
    }

    int newSize = 1;

    for (int i = 1; i < size; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    size = newSize;
}

int main() {
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    removeDuplicates(arr, size);

    std::cout << "\nArray after removing duplicates: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
