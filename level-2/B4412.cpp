#include <iostream>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    int mid = (n + 1) / 2;
    for (int i = 1; i <= n; ++i) {
        int dist = (i <= mid) ? (i - 1) : (n - i);
        for (int j = 1; j <= n; ++j) {
            if (j == mid - dist || j == mid + dist) {
                std::cout << "#";
            } else {
                std::cout << ".";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
