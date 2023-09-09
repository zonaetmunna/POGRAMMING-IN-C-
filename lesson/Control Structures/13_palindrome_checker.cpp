#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str;

    std::cout << "Enter a string: ";
    std::cin >> str;

    std::string reversedStr = str;
    std::reverse(reversedStr.begin(), reversedStr.end());

    if (str == reversedStr) {
        std::cout << str << " is a palindrome." << std::endl;
    } else {
        std::cout << str << " is not a palindrome." << std::endl;
    }

    return 0;
}
