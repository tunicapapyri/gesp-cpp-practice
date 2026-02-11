#include <iostream>
#include <algorithm>

int main() {
    int m, n;
    if (!(std::cin >> m >> n)) return 0;
    for (int i = std::max(m, n); ; ++i) {
        if (i % m == 0 && i % n == 0) {
            std::cout << i << std::endl;
            break;
        }
    }
    return 0;
}
