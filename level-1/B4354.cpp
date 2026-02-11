#include <iostream>
#include <algorithm>

int main() {
    int n, k, t;
    if (!(std::cin >> n >> k >> t)) return 0;
    std::cout << std::min(n, k * t) << std::endl;
    return 0;
}
