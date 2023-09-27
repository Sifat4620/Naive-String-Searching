#include <iostream>
#include <string>

void naiveStringSearch(const std::string& text, const std::string& pattern) {
    int textLength = text.length();
    int patternLength = pattern.length();

    for (int i = 0; i <= textLength - patternLength; ++i) {   // i = text seach
        bool isMatch = true; // Assume it's a match


        for (int j = 0; j < patternLength; ++j) {    // j = pattern seach
            if (text[i + j] != pattern[j]) {
                isMatch = false;
                break;
            }
        }


        if (isMatch) {
            std::cout << "Pattern found at position " << i << std::endl;
        }
    }
}

int main() {
    std::string text = "PANAMANAM";
    std::string pattern = "NAM";

    std::cout << "Text: " << text << std::endl;
    std::cout << "Pattern: " << pattern << std::endl;
    std::cout << "Searching position : " << std::endl;

    naiveStringSearch(text, pattern);

    return 0;
}
