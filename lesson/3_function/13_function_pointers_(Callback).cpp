// 13. Function Pointers (Callback)
#include <iostream>

// Callback function type
typedef void (*Callback)(int);

// Function to process data and call the callback
void processData(int data, Callback callback) {
    // Process data
    std::cout << "Processing data: " << data << std::endl;

    // Call the callback function
    callback(data);
}

// Callback function
void displayData(int data) {
    std::cout << "Displaying data: " << data << std::endl;
}

int main() {
    int data = 42;

    // Pass the data and callback function
    processData(data, displayData);

    return 0;
}
