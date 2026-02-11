#include <iostream>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    char current = 'A';
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << current;
            current++;
            if (current > 'Z') current = 'A';
        }
        std::cout << std::endl;
    }
    return 0;
}
