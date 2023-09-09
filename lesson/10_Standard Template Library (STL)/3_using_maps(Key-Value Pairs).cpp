#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> scores;

    scores["Alice"] = 95;
    scores["Bob"] = 85;
    scores["Charlie"] = 90;

    std::cout << "Bob's score: " << scores["Bob"] << std::endl;

    return 0;
}
