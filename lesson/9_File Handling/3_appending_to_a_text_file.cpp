#include <iostream>
#include <fstream>

int main() {
    std::ofstream outputFile("example.txt", std::ios::app);

    if (outputFile.is_open()) {
        outputFile << "Appending data to the file." << std::endl;
        outputFile.close();
        std::cout << "Data appended to file." << std::endl;
    } else {
        std::cerr << "Failed to open the file for appending." << std::endl;
    }

    return 0;
}
