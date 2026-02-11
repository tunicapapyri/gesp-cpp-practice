#include <iostream>

int main() {
    int n, x, y;
    if (!(std::cin >> n >> x >> y)) return 0;
    int eaten = (y + x - 1) / x;
    std::cout << n - eaten << std::endl;
    return 0;
}
