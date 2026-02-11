#include <iostream>
#include <string>
#include <cmath>

long long toDecimal(int k, std::string s) {
    long long res = 0;
    long long power = 1;
    for (int i = s.length() - 1; i >= 0; --i) {
        int val;
        char c = s[i];
        if (c >= '0' && c <= '9') {
            val = c - '0';
        } else {
            val = c - 'A' + 10;
        }
        res += val * power;
        power *= k;
    }
    return res;
}

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    
    for (int i = 0; i < n; ++i) {
        int k;
        std::string s;
        std::cin >> k >> s;
        std::cout << toDecimal(k, s) << std::endl;
    }
    
    return 0;
}
