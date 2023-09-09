#include <iostream>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int num1, num2;

    std::cout << "Enter two positive integers: ";
    std::cin >> num1 >> num2;

    int result = gcd(num1, num2);

    std::cout << "GCD of " << num1 << " and " << num2 << ": " << result << std::endl;

    return 0;
}
