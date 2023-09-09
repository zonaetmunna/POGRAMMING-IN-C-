#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str = "Hello, World!";

    std::transform(str.begin(), str.end(), str.begin(), ::toupper);

    std::cout << "Uppercase string: " << str << std::endl;

    return 0;
}
