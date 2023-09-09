#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string sentence = "This is a sample sentence";
    std::istringstream iss(sentence);
    std::string word;

    std::cout << "Words in the sentence: ";
    while (iss >> word) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    return 0;
}
