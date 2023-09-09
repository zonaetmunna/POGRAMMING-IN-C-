#include <iostream>
#include <fstream>

class FileHandler {
private:
    std::ofstream file;

public:
    FileHandler(const std::string& filename) {
        file.open(filename);
        if (!file.is_open()) {
            throw std::runtime_error("Failed to open file");
        }
    }

    ~FileHandler() {
        if (file.is_open()) {
            file.close();
        }
    }

    void write(const std::string& text) {
        file << text;
    }
};

int main() {
    try {
        FileHandler file("example.txt");
        file.write("Hello, Exception Handling!");
    } catch (const std::exception& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
