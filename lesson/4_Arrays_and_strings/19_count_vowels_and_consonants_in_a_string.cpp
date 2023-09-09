#include <iostream>
#include <string>

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    std::string str = "Hello, World!";
    int vowels = 0, consonants = 0;

    for (char c : str) {
        if (isalpha(c)) {
            if (isVowel(c)) {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    std::cout << "Vowels: " << vowels << ", Consonants: " << consonants << std::endl;

    return 0;
}
