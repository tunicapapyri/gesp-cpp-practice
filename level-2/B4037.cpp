#include <iostream>

int main() {
    int m;
    if (!(std::cin >> m)) return 0;
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (j == 1 || j == m || i == j) {
                std::cout << "+";
            } else {
                std::cout << "-";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
