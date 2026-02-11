#include <iostream>

int main() {
    int n, m;
    if (!(std::cin >> n >> m)) return 0;
    for (int i = 1; i <= n; ++i) {
        if (i % m != 0) {
            std::cout << i << std::endl;
        }
    }
    return 0;
}
