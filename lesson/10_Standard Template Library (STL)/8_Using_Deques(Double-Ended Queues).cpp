#include <iostream>
#include <deque>

int main() {
    std::deque<char> characters;

    characters.push_back('A');
    characters.push_front('B');
    characters.push_back('C');

    for (char ch : characters) {
        std::cout << ch << " ";
    }
    std::cout << std::endl;

    return 0;
}
