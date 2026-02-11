#include <iostream>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            char c = (char)('A' + (i + j) % 26);
            std::cout << c;
        }
        std::cout << std::endl;
    }
    return 0;
}
