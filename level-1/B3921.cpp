#include <iostream>

int main() {
    int x, n;
    if (!(std::cin >> x >> n)) return 0;
    int res = (x + n - 1) % 7 + 1;
    std::cout << res << std::endl;
    return 0;
}
