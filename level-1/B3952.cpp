#include <iostream>

int main() {
    int m;
    if (!(std::cin >> m)) return 0;
    std::cout << m / 13 << std::endl;
    std::cout << m % 13 << std::endl;
    return 0;
}
