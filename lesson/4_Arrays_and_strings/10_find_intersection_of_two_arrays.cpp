#include <iostream>

void findIntersection(int arr1[], int size1, int arr2[], int size2) {
    std::cout << "Intersection of arrays: ";
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                std::cout << arr1[i] << " ";
                break;
            }
        }
    }
    std::cout << std::endl;
}

int main() {
    int arr1[] = {2, 4, 6, 8};
    int arr2[] = {1, 3, 6, 8};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    findIntersection(arr1, size1, arr2, size2);

    return 0;
}
