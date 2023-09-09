#include <iostream>

int& findMax(int& num1, int& num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int a = 5, b = 8;
    int& maxRef = findMax(a, b);

    std::cout << "Maximum value: " << maxRef << std::endl;

    return 0;
}
