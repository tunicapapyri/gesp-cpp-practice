#include <iostream>
#include <string>
#include <vector>

bool isValid(const std::string& s, int base) {
    for (char c : s) {
        int val;
        if (c >= '0' && c <= '9') {
            val = c - '0';
        } else if (c >= 'A' && c <= 'F') {
            val = c - 'A' + 10;
        } else {
            return false;
        }
        if (val >= base) return false;
    }
    return true;
}

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    
    std::string s;
    for (int i = 0; i < n; ++i) {
        std::cin >> s;
        std::cout << isValid(s, 2) << " "
                  << isValid(s, 8) << " "
                  << isValid(s, 10) << " "
                  << isValid(s, 16) << std::endl;
    }
    return 0;
}
