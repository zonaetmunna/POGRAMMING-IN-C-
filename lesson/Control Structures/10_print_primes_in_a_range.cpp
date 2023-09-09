#include <iostream>
#include <cmath>

int main() {
    int start, end;

    std::cout << "Enter the range (start and end): ";
    std::cin >> start >> end;

    std::cout << "Prime numbers in the range " << start << " to " << end << ": ";

    for (int num = start; num <= end; num++) {
        if (num <= 1) {
            continue;
        }
        bool isPrime = true;
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            std::cout << num << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
