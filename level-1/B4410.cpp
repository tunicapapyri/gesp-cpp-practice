#include <iostream>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    long long total = 0;
    for (int i = 1; i <= n; ++i) {
        total += i * i;
    }
    std::cout << total << std::endl;
    return 0;
}
