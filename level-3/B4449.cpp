#include <iostream>
#include <string>

void solve() {
    std::string s;
    if (!(std::cin >> s)) return;
    
    if (s.length() < 8) {
        std::cout << "N" << std::endl;
        return;
    }
    
    bool hasUpper = false;
    bool hasDigit = false;
    
    for (char c : s) {
        if (c >= 'A' && c <= 'Z') hasUpper = true;
        if (c >= '0' && c <= '9') hasDigit = true;
    }
    
    if (hasUpper && hasDigit) {
        std::cout << "Y" << std::endl;
    } else {
        std::cout << "N" << std::endl;
    }
}

int main() {
    int t;
    if (std::cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
