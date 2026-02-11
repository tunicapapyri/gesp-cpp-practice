#include <iostream>

int main() {
    int t;
    if (!(std::cin >> t)) return 0;
    while (t--) {
        int p;
        std::cin >> p;
        if (p <= 10) std::cout << "R" << std::endl;
        else if (p <= 20) std::cout << "L" << std::endl;
        else std::cout << p << std::endl;
    }
    return 0;
}
