#include <iostream>

void solve() {
    long long a;
    if (!(std::cin >> a)) return;
    for (long long b = 1; b <= 100; ++b) {
        if (b * b * b * b == a) {
            std::cout << b << std::endl;
            return;
        }
    }
    std::cout << -1 << std::endl;
}

int main() {
    int t;
    if (!(std::cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}
