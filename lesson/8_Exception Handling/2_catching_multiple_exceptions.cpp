#include <iostream>

int main() {
    try {
        int numerator = 10;
        int denominator = 0;
        if (denominator == 0) {
            throw std::invalid_argument("Invalid argument: denominator is zero");
        }
        int result = numerator / denominator;
        std::cout << "Result: " << result << std::endl;
    } catch (const std::invalid_argument& ex) {
        std::cerr << "Invalid Argument Exception: " << ex.what() << std::endl;
    } catch (const std::runtime_error& ex) {
        std::cerr << "Runtime Error: " << ex.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown Exception" << std::endl;
    }

    return 0;
}
