#include <iostream>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    long long res = 1;
    bool overflow = false;
    for (int i = 0; i < n; ++i) {
        int a;
        std::cin >> a;
        if (!overflow) {
            res *= a;
            if (res > 1000000) {
                overflow = true;
            }
        }
    }
    if (overflow) {
        std::cout << ">1000000" << std::endl;
    } else {
        std::cout << res << std::endl;
    }
    return 0;
}
