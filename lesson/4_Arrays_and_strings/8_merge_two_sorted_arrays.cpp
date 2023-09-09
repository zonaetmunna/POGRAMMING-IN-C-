#include <iostream>

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }

    while (i < size1) {
        result[k++] = arr1[i++];
    }

    while (j < size2) {
        result[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {2, 4, 6};
    int arr2[] = {1, 3, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int result[size1 + size2];

    mergeArrays(arr1, size1, arr2, size2, result);

    std::cout << "Merged array: ";
    for (int i = 0; i < size1 + size2; i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
