#include <iostream>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i == j || i + j == n + 1) {
                std::cout << "+";
            } else {
                std::cout << "-";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
