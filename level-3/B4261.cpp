#include <iostream>

int main() {
    int x;
    if (!(std::cin >> x)) return 0;
    
    // (x & y) + (x | y) = x + y
    // x + y = 2025
    // y = 2025 - x
    
    int y = 2025 - x;
    if (y <= 0) {
        std::cout << -1 << std::endl;
    } else {
        std::cout << y << std::endl;
    }
    
    return 0;
}
