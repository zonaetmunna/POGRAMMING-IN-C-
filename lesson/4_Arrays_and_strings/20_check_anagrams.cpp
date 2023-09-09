#include <iostream>
#include <string>
#include <algorithm>

bool areAnagrams(const std::string& str1, const std::string& str2) {
    std::string sortedStr1 = str1;
    std::string sortedStr2 = str2;
    std::sort(sortedStr1.begin(), sortedStr1.end());
    std::sort(sortedStr2.begin(), sortedStr2.end());
    return sortedStr1 == sortedStr2;
}

int main() {
    std::string word1 = "listen";
    std::string word2 = "silent";

    if (areAnagrams(word1, word2)) {
        std::cout << word1 << " and " << word2 << " are anagrams." << std::endl;
    } else {
        std::cout << word1 << " and " << word2 << " are not anagrams." << std::endl;
    }

    return 0;
}
