#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& str) {
    std::string reversed = str;
    std::reverse(reversed.begin(), reversed.end());
    return str == reversed;
}

int main() {
    std::string str = "racecar";

    if (isPalindrome(str)) {
        std::cout << str << " is a palindrome." << std::endl;
    } else {
        std::cout << str << " is not a palindrome." << std::endl;
    }

    return 0;
}
