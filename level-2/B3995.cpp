#include <iostream>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    int mid = (n + 1) / 2;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (j == 1 || j == n) {
                std::cout << "|";
            } else if (i == 1 || i == n) {
                std::cout << "-";
            } else if (i == mid) {
                if (j == mid) std::cout << "x";
                else std::cout << "-";
            } else if (j == mid) {
                std::cout << "|";
            } else {
                std::cout << "x";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
