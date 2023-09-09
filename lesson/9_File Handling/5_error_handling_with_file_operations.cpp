#include <iostream>
#include <fstream>
#include <string>

int main() {
    try {
        std::ofstream outputFile("example.txt");

        if (!outputFile.is_open()) {
            throw std::runtime_error("Failed to open the file for writing.");
        }

        outputFile << "Hello, File Handling!" << std::endl;
        outputFile.close();
        std::cout << "Data written to file." << std::endl;

        std::ifstream inputFile("nonexistent.txt");
        if (!inputFile.is_open()) {
            throw std::runtime_error("Failed to open the file for reading.");
        }

        // Read from the file (won't be reached due to the exception above)
    } catch (const std::exception& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
