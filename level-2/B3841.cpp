#include <iostream>
#include <cmath>
#include <string>

long long power(int base, int exp) {
    long long res = 1;
    for (int i = 0; i < exp; ++i) res *= base;
    return res;
}

void solve() {
    std::string s;
    if (!(std::cin >> s)) return;
    int n = s.length();
    long long num = std::stoll(s);
    long long sum = 0;
    for (char c : s) {
        sum += power(c - '0', n);
    }
    if (sum == num) {
        std::cout << "T" << std::endl;
    } else {
        std::cout << "F" << std::endl;
    }
}

int main() {
    int m;
    if (!(std::cin >> m)) return 0;
    while (m--) {
        solve();
    }
    return 0;
}
