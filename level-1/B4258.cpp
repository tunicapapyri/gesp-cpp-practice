#include <iostream>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    for (int i = 0; i < n; ++i) {
        int a;
        std::cin >> a;
        std::cout << ((a + 5) / 10) * 10 << std::endl;
    }
    return 0;
}
