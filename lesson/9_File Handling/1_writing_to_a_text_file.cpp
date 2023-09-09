#include <iostream>
#include <fstream>

int main() {
    std::ofstream outputFile("example.txt");

    if (outputFile.is_open()) {
        outputFile << "Hello, File Handling!" << std::endl;
        outputFile.close();
        std::cout << "Data written to file." << std::endl;
    } else {
        std::cerr << "Failed to open the file for writing." << std::endl;
    }

    return 0;
}
