#include <iostream>
#include <cmath>

void solve() {
    int a;
    if (!(std::cin >> a)) return;
    for (int x = 1; x * x < a; ++x) {
        int y2 = a - x * x;
        int y = sqrt(y2);
        if (y >= 1 && y * y == y2) {
            std::cout << "Yes" << std::endl;
            return;
        }
    }
    std::cout << "No" << std::endl;
}

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    while (n--) {
        solve();
    }
    return 0;
}
