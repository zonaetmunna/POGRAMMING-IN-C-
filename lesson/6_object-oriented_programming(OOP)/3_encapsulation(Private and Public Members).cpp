#include <iostream>

// Class with private and public members
class Student {
private:
    std::string name;
    int age;

public:
    Student(const std::string& n, int a) : name(n), age(a) {}

    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Student student("Alice", 20);
    student.display();


    // print name and age just practice




    return 0;
}
