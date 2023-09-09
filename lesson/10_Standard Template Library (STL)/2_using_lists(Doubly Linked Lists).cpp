#include <iostream>
#include <list>

int main() {
    std::list<std::string> names;

    names.push_back("Alice");
    names.push_back("Bob");
    names.push_back("Charlie");

    for (const std::string& name : names) {
        std::cout << name << " ";
    }
    std::cout << std::endl;

    return 0;
}
