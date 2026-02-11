#include <iostream>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    int mid = (n + 1) / 2;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (j == 1 || j == n) {
                std::cout << "|";
            } else if (i == mid) {
                std::cout << "-";
            } else {
                std::cout << "a";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
