#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inputFile("example.txt");

    if (inputFile.is_open()) {
        std::string line;
        while (std::getline(inputFile, line)) {
            std::cout << line << std::endl;
        }
        inputFile.close();
    } else {
        std::cerr << "Failed to open the file for reading." << std::endl;
    }

    return 0;
}
