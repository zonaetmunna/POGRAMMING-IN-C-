#include <iostream>
#include <fstream>

struct Student {
    int roll;
    char name[50];
};

int main() {
    // Writing to a binary file
    std::ofstream binaryOutputFile("students.dat", std::ios::binary);
    if (binaryOutputFile.is_open()) {
        Student student1 = {1, "Alice"};
        Student student2 = {2, "Bob"};
        binaryOutputFile.write(reinterpret_cast<char*>(&student1), sizeof(Student));
        binaryOutputFile.write(reinterpret_cast<char*>(&student2), sizeof(Student));
        binaryOutputFile.close();
        std::cout << "Data written to binary file." << std::endl;
    } else {
        std::cerr << "Failed to open the binary file for writing." << std::endl;
    }

    // Reading from a binary file
    std::ifstream binaryInputFile("students.dat", std::ios::binary);
    if (binaryInputFile.is_open()) {
        Student student;
        while (binaryInputFile.read(reinterpret_cast<char*>(&student), sizeof(Student))) {
            std::cout << "Roll: " << student.roll << ", Name: " << student.name << std::endl;
        }
        binaryInputFile.close();
    } else {
        std::cerr << "Failed to open the binary file for reading." << std::endl;
    }

    return 0;
}
