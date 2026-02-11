#include <iostream>

void solve() {
    int n, x;
    if (!(std::cin >> n >> x)) return;
    std::cout << n + n / x << std::endl;
}

int main() {
    int t;
    if (!(std::cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}
