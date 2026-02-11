#include <iostream>

int main() {
    int n, m;
    if (!(std::cin >> n >> m)) return 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            std::cout << i * j << (j == m ? "" : " ");
        }
        std::cout << std::endl;
    }
    return 0;
}
