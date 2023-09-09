#include <iostream>

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Element not found
}

int main() {
    int arr[] = {2, 3, 5, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1) {
        std::cout << target << " found at index " << result << std::endl;
    } else {
        std::cout << target << " not found in the array." << std::endl;
    }

    return 0;
}
