#include <iostream>

int main() {
    int k, l, r;
    if (!(std::cin >> k >> l >> r)) return 0;
    long long sum = 0;
    for (int i = l; i <= r; ++i) {
        if (i % k == 0 || i % 10 == k) {
            sum += i;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}
