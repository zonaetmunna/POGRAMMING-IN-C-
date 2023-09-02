#include <iostream>

// Function declaration with reference parameters
void getMinMax(int arr[], int size, int &minValue, int &maxValue);

int main() {
    int numbers[] = {5, 3, 9, 1, 7};
    int min, max;

    // Function call to get min and max values
    getMinMax(numbers, 5, min, max);

    std::cout << "Minimum: " << min << std::endl;
    std::cout << "Maximum: " << max << std::endl;

    return 0;
}

// Function definition
void getMinMax(int arr[], int size, int &minValue, int &maxValue) {
    if (size <= 0) {
        return;
    }

    minValue = maxValue = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
        }
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
}
