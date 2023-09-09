#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, World!";
    std::string oldSubstring = "World";
    std::string newSubstring = "Universe";

    size_t pos = str.find(oldSubstring);
    if (pos != std::string::npos) {
        str.replace(pos, oldSubstring.length(), newSubstring);
    }

    std::cout << "Modified string: " << str << std::endl;

    return 0;
}
