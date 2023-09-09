#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, World!";
    char target = 'l';
    int count = 0;

    for (char c : str) {
        if (c == target) {
            count++;
        }
    }

    std::cout << "Occurrences of '" << target << "': " << count << std::endl;

    return 0;
}
