#include <iostream>
#include <string>
#include <sstream>
#include <vector>

bool isValid(const std::string& pwd) {
    if (pwd.length() < 6 || pwd.length() > 12) return false;
    
    bool hasLower = false;
    bool hasUpper = false;
    bool hasDigit = false;
    bool hasSpecial = false;
    
    for (char c : pwd) {
        if (c >= 'a' && c <= 'z') hasLower = true;
        else if (c >= 'A' && c <= 'Z') hasUpper = true;
        else if (c >= '0' && c <= '9') hasDigit = true;
        else if (c == '!' || c == '@' || c == '#' || c == '$') hasSpecial = true;
        else return false; // Invalid character
    }
    
    if (!hasSpecial) return false;
    
    int types = 0;
    if (hasLower) types++;
    if (hasUpper) types++;
    if (hasDigit) types++;
    
    return types >= 2;
}

int main() {
    std::string line;
    if (std::cin >> line) {
        std::stringstream ss(line);
        std::string segment;
        while (std::getline(ss, segment, ',')) {
            if (isValid(segment)) {
                std::cout << segment << std::endl;
            }
        }
    }
    return 0;
}
