#include <iostream>
#include <queue>

int main() {
    std::queue<std::string> tasks;

    tasks.push("Task 1");
    tasks.push("Task 2");
    tasks.push("Task 3");

    while (!tasks.empty()) {
        std::cout << tasks.front() << std::endl;
        tasks.pop();
    }

    return 0;
}
