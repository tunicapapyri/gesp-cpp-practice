#include <iostream>
#include <string>
#include <vector>

bool isPalindrome(const std::string& s) {
    int len = s.length();
    for (int i = 0; i < len / 2; ++i) {
        if (s[i] != s[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

void solve() {
    std::string s;
    std::cin >> s;
    
    int n = s.length();
    bool found = false;
    
    // We need to split s into two parts s[0..i] and s[i+1..n-1]
    // such that both parts are palindromes and have length >= 2.
    // So i ranges from 1 (length 2) to n-3 (remaining length >= 2).
    // Length of first part is i+1.
    // Length of second part is n - (i+1).
    
    for (int i = 1; i < n - 2; ++i) {
        std::string part1 = s.substr(0, i + 1);
        std::string part2 = s.substr(i + 1);
        
        if (part1.length() >= 2 && part2.length() >= 2) {
            if (isPalindrome(part1) && isPalindrome(part2)) {
                found = true;
                break;
            }
        }
    }
    
    if (found) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
}

int main() {
    int n;
    if (std::cin >> n) {
        while (n--) {
            solve();
        }
    }
    return 0;
}
