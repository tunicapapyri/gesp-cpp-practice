#include <iostream>
#include <string>
#include <algorithm>

bool isLucky(std::string s) {
    int totalSum = 0;
    int len = s.length();
    
    // Position 1 is the last character (index len-1)
    // Position p corresponds to index len - p
    
    for (int i = 0; i < len; ++i) {
        int digit = s[i] - '0';
        int pos = len - i; // 1-based position from right
        
        if (pos % 2 == 0) {
            // Even position: unchanged
            totalSum += digit;
        } else {
            // Odd position: multiply by 7 and reduce
            int val = digit * 7;
            while (val > 9) {
                int tempSum = 0;
                while (val > 0) {
                    tempSum += val % 10;
                    val /= 10;
                }
                val = tempSum;
            }
            totalSum += val;
        }
    }
    
    return (totalSum % 8 == 0);
}

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    
    for (int i = 0; i < n; ++i) {
        std::string s;
        std::cin >> s;
        if (isLucky(s)) {
            std::cout << "T" << std::endl;
        } else {
            std::cout << "F" << std::endl;
        }
    }
    
    return 0;
}
