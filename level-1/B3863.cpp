#include <iostream>

int main() {
    int x, y, z, q;
    if (!(std::cin >> x >> y >> z >> q)) return 0;
    int cost = 2 * x + 5 * y + 3 * z;
    if (q >= cost) {
        std::cout << "Yes" << std::endl << q - cost << std::endl;
    } else {
        std::cout << "No" << std::endl << cost - q << std::endl;
    }
    return 0;
}
