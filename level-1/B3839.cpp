#include <iostream>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    long long total = 0;
    for (int i = 1; i <= n; ++i) {
        long long current_sum = 0;
        for (int j = 1; j <= i; ++j) {
            current_sum += j;
        }
        total += current_sum;
    }
    std::cout << total << std::endl;
    return 0;
}
