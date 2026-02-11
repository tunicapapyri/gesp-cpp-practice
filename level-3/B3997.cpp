#include <iostream>
#include <string>
#include <vector>

bool isPalindrome(const std::string& s, int start, int len) {
    int left = start;
    int right = start + len - 1;
    while (left < right) {
        if (s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    std::string s;
    if (!(std::cin >> s)) return 0;
    
    int n = s.length();
    int currentStart = 0;
    int currentLen = 1;
    int count = 0;
    
    while (currentStart + currentLen <= n) {
        if (isPalindrome(s, currentStart, currentLen)) {
            count++;
        }
        currentStart += currentLen;
        currentLen++;
    }
    
    if (currentStart < n) {
        int remainingLen = n - currentStart;
        if (isPalindrome(s, currentStart, remainingLen)) {
            count++;
        }
    }
    
    std::cout << count << std::endl;
    return 0;
}
